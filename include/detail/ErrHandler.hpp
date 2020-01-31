#ifndef PROJECT_INCLUDE_DETAIL_ERRHANDLER_HPP
#define PROJECT_INCLUDE_DETAIL_ERRHANDLER_HPP

#include <iostream>

namespace detail {

//*****************************************************************************
// Exceptions handler

  static void print_nested_exception(
      const std::exception_ptr & eptr = std::current_exception(),
      size_t level = 0) {
    static auto get_nested = [](auto & e) -> std::exception_ptr {
      try {
        return dynamic_cast<const std::nested_exception &>(e).nested_ptr();
      }
      catch (const std::bad_cast &) {
        return nullptr;
      }
    };

    try {
      if (eptr) { std::rethrow_exception(eptr); }
    }
    catch (const std::exception & e) {
      std::cerr << std::string(level, ' ') << "exception: " << e.what() << '\n';
      // rewind all nested exception
      print_nested_exception(get_nested(e), level + 1);
    }
  }

}

#endif //PROJECT_INCLUDE_DETAIL_ERRHANDLER_HPP

//*****************************************************************************
// Usage example
/*
 void init() {
  try {
      throw std::runtime_error("Runtime error #42");
    }
  } catch (...) {
    std::throw_with_nested(std::runtime_error("Init failed"));
  }

 void server_start {
  try {
    init();
  }
  catch (...) {
    std::throw_with_nested(std::runtime_error("Start failed"));
  }
 }

 int_main {
    try {
      server_start();
    }
    catch (std::exception const &)   {
      print_nested_exception();
    }
 }
*/
//*****************************************************************************
