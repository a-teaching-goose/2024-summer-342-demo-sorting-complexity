#include "util.hpp"

void good_test_bubble_sort() {

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
            if (expect[i] != actual[i]) {
                std::cout << "FAILED at size " << std::to_string(size) << std::endl;
                print_vector("expect: ", expect);
                print_vector("actual: ", actual);
                failed = true;
                break;
            }
        }
        if (failed) {
            break;
        } else {
            std::cout << "Size " << std::to_string(size) << " PASSED." << std::endl;
        }
        size += step;
    }
}