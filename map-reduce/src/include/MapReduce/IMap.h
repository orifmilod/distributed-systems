#pragma once

namespace MapReduce {

class IMap {
public:
  virtual void run() = 0;

  // Do we need this
  virtual bool is_stable() const { return true; };
};
} // namespace MapReduce
