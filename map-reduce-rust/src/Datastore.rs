use std::path;

// TODO: Check if it's possible to define enum inside the class

pub enum Status {
    SUCCESS,
    ERROR,
}

pub struct Response {
  m_file_path: std::path::Path,
  m_status: Status,
}

pub struct Datastore {
  m_file_paths: std::stack<std::filesystem::path>,
}

impl Datastore {
  pub fn new(directory_path: std::filesystem::path, extension: std::string) -> Datastore {
    Datastore {
      // TODO: read the directory and retreive all the files with the given extension
    }
  }

  /*
   * Returns a file path of an unretreived data file
   */
  fn getFile() -> Response {

  }
}
