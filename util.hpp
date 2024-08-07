#pragma once

#include <vector>
#include <iostream>

void test_bubble_sort();

void swap(std::vector<int> &, int, int);

void bubble_sort(std::vector<int> &);

void print_vector(const std::string &name, const std::vector<int> &vec) {
    std::cout << name << ": [ ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << " ]" << std::endl;
}

#define CHECK_AND_PRINT_FAILURE(expect, actual, size, failed)        \
    do {                                                             \
        if ((expect) != (actual)) {                                  \
            std::cout << "FAILED at size " << std::to_string(size)   \
                      << std::endl;                                  \
            print_vector("expect: ", expect);                        \
            print_vector("actual: ", actual);                        \
            (failed) = true;                                         \
            break;                                                   \
        }                                                            \
    } while (0)
