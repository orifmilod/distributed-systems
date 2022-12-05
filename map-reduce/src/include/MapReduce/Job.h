#pragma once

#include "Logger.h"
#include "Map.h"
#include "Reduce.h"

#include <boost/mpi.hpp>

namespace MapReduce {

template <typename Datastore, typename Map, typename IntermediateStore,
          typename Reduce, typename Outputstore>
class Job {
public:
  Job(Datastore &data_store, Map &map, IntermediateStore &intermediat_store,
      Reduce &reduce, Outputstore &output_store)
      : m_data_store(data_store), m_map(map),
        m_intermediate_store(intermediat_store), m_reduce(reduce),
        m_output_store(output_store) {}

  /*
   * Executes a given MapRedeuce Job
   */
  void execute() {
    run_map_tasks();
    run_combiner_tasks();
    run_reduce_tasks();
  }

private:
  void run_map_tasks() { Logger::info("Running map tasks"); }

  void run_combiner_tasks() { Logger::info("Running combiner tasks"); }

  void run_reduce_tasks() { Logger::info("Running reduce tasks"); }

private:
  Datastore m_data_store;
  Map m_map;
  IntermediateStore m_intermediate_store;
  Reduce m_reduce;
  Outputstore m_output_store;
};

//
} // namespace MapReduce
