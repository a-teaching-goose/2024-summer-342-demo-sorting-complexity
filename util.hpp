#pragma once

#include <vector>
#include <iostream>

void good_test_bubble_sort();

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

#define CHECK_FAILURE(failed, expect, actual) \
    if (failed) { \
        print_vector("expect: ", expect); \
        print_vector("actual: ", actual); \
        break; \
    } else { \
        std::cout << "Size " << std::to_string(size) << " PASSED." << std::endl; \
    }
