#ifndef PROJECT_INCLUDE_DETAIL_UTILS_HPP
#define PROJECT_INCLUDE_DETAIL_UTILS_HPP

#include <iostream>
#include <sstream>

namespace detail {

//*****************************************************************************
// Text concatenation

  template<typename T>
  static std::string concat(const T & value) {
    std::ostringstream tmp_str;
    tmp_str << value;
    return tmp_str.str();
  }

  template<typename T, typename ... Args>
  static std::string concat(const T & value, const Args & ... args) {
    return concat(value) + concat(args...);
  }
//*****************************************************************************

}

#endif //PROJECT_INCLUDE_DETAIL_UTILS_HPP