#include <vector>

void test_bubble_sort();

void swap(int *data, int i, int j);

void bubble_sort(std::vector<int> &data);

int main() {
    test_bubble_sort();
}

void test_bubble_sort() {
    std::vector<int> data = {6, 7, 8, 1, 2};
    bubble_sort(data);

}

void bubble_sort(std::vector<int> &data) {


}