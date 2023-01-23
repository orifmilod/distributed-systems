mod Datastore;
use std::path::{Path, PathBuf};

fn main() {
    let search_dir = Path::new("../../map-reduce/examples/data/");
    let extension = String::from(".txt");

    let datastore = Datastore::Datastore::new(&search_dir, &extension);
}
