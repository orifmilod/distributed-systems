#include "Datastore.h"
#include "Logger.h"
#include <filesystem>

namespace Examples {

namespace fs = std::filesystem;

Datastore::Datastore(fs::path directory_path, std::string extension) {
  assert(fs::is_directory(directory_path));

  for (auto const entry : fs::recursive_directory_iterator(directory_path)) {
    if (fs::is_regular_file(entry) && entry.path().extension() == extension) {
      Logger::info("Found file:", entry.path().string());
      m_file_paths.push(entry.path().filename());
    }
  }
}

Datastore::Response Datastore::getFile() {
  std::lock_guard<std::mutex> lk(m_file_lock);

  if (m_file_paths.empty()) {
    return Response{.m_file_path = "", .m_status = Status::ERROR};
  }

  auto response =
      Response{.m_file_path = m_file_paths.top(), .m_status = Status::SUCCESS};
  m_file_paths.pop();
  return response;
}

} // namespace Examples

int main() {
  using namespace Examples;
  // Please notice that the binary needs to be executede in the directory that
  // it resides in
  const fs::path DATA_PATH = "data";
  std::string EXTENTION = ".txt";

  Datastore datastore(fs::current_path() / DATA_PATH, EXTENTION);

  // TODO: Create a gRPC server and server clients

  return 0;
}
