#ifndef DEFINES_H
#define DEFINES_H

#include <memory>
#include <vector>
#include <iostream>
#include <tuple>
#include <map>
#include <limits>

namespace GBDT {
  using std::shared_ptr;
  using std::string;
  using std::vector;
  using std::tuple;
  using std::map;
  using size_type = unsigned int;
  using index_type = size_type;
  const index_type NONE = std::numeric_limits<index_type>::max();
  const size_type MAX_SIZE = NONE;

#define LOG_INFO(x) \
  std::cout << x << std::endl

#define LOG_ERROR(x) \
  std::cerr << x << std::endl

#define LOG_DEBUG(x)

#ifdef ENABLE_DEBUG

#define LOG_DEBUG(x) \
  std::cout << x << std::endl

#endif // ENABLE_DEBUG

}

#endif /* DEFINES_H */
