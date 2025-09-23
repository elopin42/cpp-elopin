#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <list>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int e) {
  typename T::iterator it = std::find(container.begin(), container.end(), e);
  if (it == container.end())
    throw std::runtime_error("value not found");
  return it;
}



#endif // !EASY_FIND_HPP
