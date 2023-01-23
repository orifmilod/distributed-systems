mod MapReduce {
pub struct Master<Datastore, Map, Reduce> {
  pub data_store: Datastore,
  pub map: Map,
  pub reduce: Reduce,
}
}
