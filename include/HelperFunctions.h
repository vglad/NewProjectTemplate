#pragma once

#include <vector>
#include <iterator>
#include <sstream>

//Various helper functions:

namespace Helper {

    template <typename T>
    std::vector<T> parse_line(const std::string& s) {
        std::vector<T> result;
        std::istringstream iss(s);
        std::copy(std::istream_iterator<T>(iss), std::istream_iterator<T>(),
                  std::back_inserter(result));
        return result;
    }

}