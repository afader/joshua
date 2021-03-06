#ifndef BUILDER_DISCOUNT__
#define BUILDER_DISCOUNT__

#include <algorithm>

#include <stdint.h>

namespace lm {
namespace builder {

struct Discount {
  float amount[4];

  float Get(uint64_t count) const {
    return amount[std::min<uint64_t>(count, 3)];
  }

  float Apply(uint64_t count) const {
    return static_cast<float>(count) - Get(count);
  }
};

} // namespace builder
} // namespace lm

#endif // BUILDER_DISCOUNT__
