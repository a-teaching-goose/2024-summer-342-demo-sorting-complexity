#include "util.hpp"

void good_test_bubble_sort() {
    std::cout << "running " << __func__ << std::endl;

    int size = 5;
    int end_size = 50;
    int step = 5;
    while ((size += step) <= end_size) {
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
                failed = true;
                break;
            }
        }
        CHECK_FAILURE(failed, expect, actual);
    }
}

void bad_test_bubble_sort() {
    std::cout << "running " << __func__ << std::endl;

    int size = 0;
    int end_size = 50;
    int step = 5;
    while ((size += step) <= end_size) {
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
        for (int i = 0; i < size - 1; i++) {
            if (actual[i] > actual[i + 1]) {
                std::cout << "FAILED at size " << std::to_string(size) << std::endl;
                failed = true;
                break;
            }
        }
        CHECK_FAILURE(failed, expect, actual);
    }
}
