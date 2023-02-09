mod Datastore;
use std::path::{Path};

fn main() {
    // Somehow copy the data into build dir
    let search_dir = Path::new("../map-reduce/examples/data/");
    let extension = String::from("txt");

    let datastore = Datastore::Datastore::new(&search_dir, &extension);
}
