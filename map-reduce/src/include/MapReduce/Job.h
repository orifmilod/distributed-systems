#pragma once

#include "IMap.h"
#include "IReduce.h"
#include "Logger.h"

#include <memory>

#include <boost/mpi.hpp>

namespace MapReduce {

template <class Datastore, class Map, class IntermediateStore, class Reduce,
          class Outputstore>
class Job {
public:
  // TODO: How to get rid of the default cntr
  Job() {}

  Job(Datastore &data_store, std::unique_ptr<Map> map,
      IntermediateStore &intermediat_store, std::unique_ptr<Reduce> reduce,
      Outputstore &output_store)
      : m_data_store(data_store), m_map(std::move(map)),
        m_intermediate_store(intermediat_store), m_reduce(std::move(reduce)),
        m_output_store(output_store) {}

  /*
   * Executes a given MapRedeuce Job
   */
  void execute();

private:
  void run_map_tasks();
  void run_combiner_tasks();
  void run_reduce_tasks();

private:
  Datastore m_data_store;
  std::unique_ptr<Map> m_map;
  IntermediateStore m_intermediate_store;
  std::unique_ptr<Reduce> m_reduce;
  Outputstore m_output_store;
};

//
} // namespace MapReduce
