mod Datastore;
use std::path::Path;

fn main() {
    // Somehow copy the data into build dir
    let search_dir = Path::new("../map-reduce/examples/data/");
    let extension = String::from("txt");

    let mut datastore = Datastore::Datastore::new(&search_dir, &extension);
    println!("getting file");
    let count = 0;
    while(count < 10){
        let res = &datastore.get_file();

        match &res.m_status  {
           Datastore::Status::Success => println!("Received file to process: {}", &res.m_file_path.as_ref().unwrap().to_str().unwrap()),
           _ => println!("No more file is left to process"),
        }
    }
}
