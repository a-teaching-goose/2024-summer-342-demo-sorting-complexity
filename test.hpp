#include "util.hpp"

void print_vector(const std::string &name, const std::vector<int> &vec);

void test_bubble_sort() {

    int size = 5;
    int end_size = 50;
    int step = 5;
    while (size <= end_size) {
        /*
         * set the input
         */
        std::vector<int> actual(size);
        for (int i = 0; i < size; i++) {
            actual[i] = size - i;
        }
        /*
         * set the expected output
         */
        std::vector<int> expect(size);
        for (int i = 0; i < size; i++) {
            expect[i] = i + 1;
        }

        /*
         * call the function
         */
        bubble_sort(actual);

        /*
         * verify actual output matches expected output
         */
        bool failed = false;
        for (int i = 0; i < size; i++) {
            CHECK_AND_PRINT_FAILURE(expect, actual, size, failed);
        }
        if (failed) {
            break;
        } else {
            std::cout << "Size " << std::to_string(size) << " PASSED." << std::endl;
        }
        size += step;
    }
}