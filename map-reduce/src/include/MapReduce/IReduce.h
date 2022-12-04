#pragma once

namespace MapReduce {

template <typename IntermediateStore, typename OutputStore> //
class IReduce {
public:
  IReduce() {}

  virtual void run() = 0;

  virtual bool is_stable() const { return true; }
};

} // namespace MapReduce
