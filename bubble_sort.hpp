#include "util.hpp"

void bubble_sort(std::vector<int> &data) {
    size_t length = data.size();
    if (length < 2) {
        return;
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                swap(data, j, j + 1);
            }
        }
    }
}

void swap(std::vector<int> &data, int i, int j) {
    int tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
}
