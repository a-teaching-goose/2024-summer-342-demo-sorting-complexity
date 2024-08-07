#include <vector>
#include <iostream>

void test_bubble_sort();

void swap(std::vector<int> &data, int i, int j);

void bubble_sort(std::vector<int> &data);

void test_bubble_sort() {

    int size = 10;
    int end_size = 10;
    int step = 200;
    while (size <= end_size) {
        std::vector<int> data(size);
        for (int i = 0; i < size; i++) {
            data[i] = size - i - 1;
        }
        bubble_sort(data);

#ifdef PRINT
        for (int v: data) {
            std::cout << v << std::endl;
        }
#endif
        for (int i = 0; i < size; i++) {
            if (data[i] != i) {
                std::cout << "sort failed. Expected: " << i << ". Actual: " << data[i] << std::endl;
            }
        }
        size += step;
    }

}

//
// 5 4 3 2 1
// 4 5 3 2 1
// 4 3 5 2 1
// 4 3 2 5 1
// 4 3 2 1 5

void bubble_sort(std::vector<int> &data) {
    size_t length = data.size();

    if (length < 2) {
        return;
    }
    int num_of_comparison = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            num_of_comparison++;
            if (data[j] > data[j + 1]) {    // how many time does this run.
                swap(data, j, j + 1);
            }
        }
    }

    std::cout << length << ", " << num_of_comparison << std::endl;
}

void swap(std::vector<int> &data, int i, int j) {
    int tmp = data[i];
    data[i] = data[j];
    data[j] = tmp;
}
