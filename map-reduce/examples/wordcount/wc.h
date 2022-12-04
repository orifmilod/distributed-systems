#pragma once

#include <MapReduce/IMap.h>
#include <MapReduce/IReduce.h>
#include <MapReduce/Job.h>

namespace Examples {

class Datastore {
public:
  void save() { MapReduce::Logger::info("save"); }
  void load() { MapReduce::Logger::info("load"); }
};

class IntermediateStore {
public:
  void save() { MapReduce::Logger::info("save"); }
  void load() { MapReduce::Logger::info("load"); }
};

class Outputstore {
public:
  void save() { MapReduce::Logger::info("save"); }
  void load() { MapReduce::Logger::info("load"); }
};

class Map : public MapReduce::IMap<Datastore, IntermediateStore> {
public:
  void run() override { MapReduce::Logger::info("Running map function"); }
};

class Reduce : public MapReduce::IReduce<Datastore, IntermediateStore> {
public:
  void run() override { MapReduce::Logger::info("Running map function"); }
};

class WordCount : public MapReduce::Job<Datastore, Map, IntermediateStore,
                                        Reduce, Outputstore> {

public:
  WordCount();
  void count();
  ~WordCount() = default;
};
} // namespace Examples
