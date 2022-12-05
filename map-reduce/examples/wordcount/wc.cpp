#include "Logger.h"
#include "wc.h"

namespace Examples {

WordCount::WordCount()
    : m_map(m_data_store, m_intermediate_store),
      m_reduce(m_intermediate_store, m_output_store),
      m_job(m_data_store, m_map, m_intermediate_store, m_reduce,
            m_output_store) {
  Logger::info("Starting the word counter");
  m_job.execute();
}

void WordCount::count() { Logger::info("Counting"); }

} // namespace Examples
