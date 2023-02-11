use std::ascii::AsciiExt;
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
  pub m_file_path: Option<PathBuf>,
  pub m_status: Status,
}

pub struct Datastore {
  m_file_paths: VecDeque<PathBuf>,
}

impl Datastore {
  pub fn new(directory_path: &Path, extension: &str) -> Self {
    let mut queue = VecDeque::new();
    let files = fs::read_dir(directory_path).unwrap();

    for file in files {
      if file.as_ref().unwrap().path().extension().unwrap().to_str().unwrap() == extension {
        println!("Pushing file: {}", file.as_ref().unwrap().path().to_str().unwrap());
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
  pub fn get_file(&mut self) -> Response {
    if self.m_file_paths.capacity() == 0 {
      return Response { m_file_path: Option::None, m_status: Status::OutOfFile }
    }

    println!("{}", self.m_file_paths.capacity());

    let file_path = self.m_file_paths.pop_front();
    println!("{}", file_path.as_ref().unwrap().to_str().unwrap());

    return Response { m_file_path: Option::Some(file_path.unwrap()), m_status: Status::Success }
  }
}
