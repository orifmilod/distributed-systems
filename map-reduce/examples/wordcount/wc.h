#pragma once

#include <MapReduce/IMap.h>
#include <MapReduce/IReduce.h>
#include <MapReduce/Job.h>

namespace Examples {
using namespace MapReduce;

class Datastore {
public:
  void save() { Logger::info("save"); }
  void load() { Logger::info("load"); }
};

class IntermediateStore {
public:
  void save() { Logger::info("save"); }
  void load() { Logger::info("load"); }
};

class Outputstore {
public:
  void save() { Logger::info("save"); }
  void load() { Logger::info("load"); }
};

class Map : public IMap {
  Datastore m_data_store;
  IntermediateStore m_intermediate_store;

public:
  Map(Datastore &ds, IntermediateStore &is)
      : m_data_store(ds), m_intermediate_store(is){};

  void run() override { Logger::info("Running map function"); }
};

class Reduce : public IReduce {
  Outputstore m_output_store;
  IntermediateStore m_intermediate_store;

public:
  Reduce(IntermediateStore &is, Outputstore &os)
      : m_output_store(os), m_intermediate_store(is){};

  void run() override { Logger::info("Running map function"); }
};

class WordCount {
public:
  WordCount();
  ~WordCount() = default;

  void count();

private:
  MapReduce::Job<Datastore, Map, IntermediateStore, Reduce, Outputstore> m_job;
};
} // namespace Examples
