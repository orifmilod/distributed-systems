#pragma once

#include <MapReduce/Job.h>
#include <MapReduce/Map.h>
#include <MapReduce/Reduce.h>

#include <filesystem>
#include <string>
#include <vector>

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

class MyMap : public Map<std::filesystem::path, std::string> {
  Datastore m_data_store;
  IntermediateStore m_intermediate_store;

public:
  MyMap(Datastore &ds, IntermediateStore &is)
      : m_data_store(ds), m_intermediate_store(is){};

  void map(std::filesystem::path filepath /*, std::string value?? */) {
    Logger::info("Running map function on file:", filepath.string());
  }
};

class MyReduce : public Reduce<std::string, int> {
  Outputstore m_output_store;
  IntermediateStore m_intermediate_store;

public:
  MyReduce(IntermediateStore &is, Outputstore &os)
      : m_output_store(os), m_intermediate_store(is){};

  // For places where file is bigger that what can fit in the memory then we
  // can use iterator instead of vector
  void reduce(std::string key, std::vector<int> occurence_count) {
    Logger::info("Running reduce function");
  }
};

class WordCount {
public:
  WordCount();
  ~WordCount() = default;

  void count();

private:
  Datastore m_data_store;
  Outputstore m_output_store;
  IntermediateStore m_intermediate_store;
  MyMap m_map;
  MyReduce m_reduce;

  MapReduce::Job<Datastore, MyMap, IntermediateStore, MyReduce, Outputstore>
      m_job;
};
} // namespace Examples
