#include "Job.h"

namespace MapReduce {

template <class Datastore, class Map, class IntermediateStore, class Reduce,
          class Outputstore>
void Job<Datastore, Map, IntermediateStore, Reduce, Outputstore>::execute() {
  run_map_tasks();
  run_combiner_tasks();
  run_reduce_tasks();
}

void Job::grun_map_tasks() { Logger::info("Runnign Map function"); }
void Job::grun_combiner_tasks() { Logger::info("Runnign combiner function"); }
void Job::grun_reduce_tasks() { Logger::info("Runnign reduce function"); }

} // namespace MapReduce
