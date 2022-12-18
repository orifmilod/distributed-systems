#include <MapReduce/Logger.h>

#include <filesystem>
#include <mutex>
#include <stack>

namespace Examples {

using namespace MapReduce;

class Datastore {
  std::mutex m_file_lock;
  std::stack<std::filesystem::path> m_file_paths;

public:
  Datastore(std::filesystem::path directory_path, std::string extension);

  enum Status {
    SUCCESS,
    ERROR,
  };

  struct Response {
    std::filesystem::path m_file_path;
    Status m_status;
  };

  /*
   * Returns a file path of an unretreived data file
   */
  Response getFile();
};

} // namespace Examples
