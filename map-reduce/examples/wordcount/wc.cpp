#include <memory>

#include "wc.h"

namespace Examples {

WordCount::WordCount() : m_job() {
  Datastore data_store;
  Outputstore output_store;
  IntermediateStore intermediate_store;

  auto mapper = std::make_unique<Map>(data_store, intermediate_store);
  auto reducer = std::make_unique<Reduce>(intermediate_store, output_store);

  m_job = Job<Datastore, Map, IntermediateStore, Reduce, Outputstore>(
      data_store, std::move(mapper), intermediate_store, std::move(reducer),
      output_store);

  Logger::info("Starting the word counter");
}

void WordCount::count() { Logger::info("Counting"); }

} // namespace Examples
