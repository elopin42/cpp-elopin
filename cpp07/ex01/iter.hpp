#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T, typename F>
void iter(T* array, size_t length, F &func) {
    if (!array)
        return ;
    for (size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}

template <typename T, typename F>
void iter(const T* array, const size_t length, const F &func) {
    if (!array)
        return ;
    for (size_t i = 0; i < length; i++) {
        func(array[i]);
    }
}

#endif
