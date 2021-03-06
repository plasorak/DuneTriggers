#pragma once
#include <cstdint>

namespace DuneTriggerAlgs {
  struct TriggerDecision {
    int64_t  time_start     = {0}; 
    int64_t  time_end       = {0};
    int64_t  time_triggered = {0};
    uint32_t detid          = {0};
    uint32_t flag           = {0};
  };
}
