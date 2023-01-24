use std::fs;
use std::path::{Path, PathBuf};
use std::collections::VecDeque;

// TODO: Check if it's possible to define enum inside the class
pub enum Status {
  Success,
  Error,
  OutOfFile,
}

pub struct Response {
  m_file_path: Option<PathBuf>,
  m_status: Status,
}

pub struct Datastore {
  m_file_paths: VecDeque<PathBuf>,
}

impl Datastore {
  pub fn new(directory_path: &Path, extension: &str) -> Self {
    let mut queue = VecDeque::new();
    for file in fs::read_dir(directory_path).unwrap() {
      if file.unwrap().path().extension().unwrap().to_str().unwrap() == extension {
        queue.push_back(file.unwrap().path());
      }
    }

    return Datastore {
      m_file_paths: VecDeque::new(),
    }
  }

  /*
   * Returns a file path of an unretreived data file
   */
  fn get_file(&mut self) -> Response {
    if self.m_file_paths.capacity() == 0 {
      return Response { m_file_path: Option::None, m_status: Status::OutOfFile }
    }

    let file_path = self.m_file_paths.pop_front();
    return Response { m_file_path: Option::Some(file_path.unwrap()), m_status: Status::Success }
  }
}
