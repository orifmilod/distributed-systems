#pragma once

namespace MapReduce {

template <typename Datastore, typename IntermediateStore> //
class IMap {
public:
  IMap(Datastore datastore, IntermediateStore intermediateStore) {}

  virtual void run() = 0;

  // Do we need this
  virtual bool is_stable() const { return true; };
};
} // namespace MapReduce
