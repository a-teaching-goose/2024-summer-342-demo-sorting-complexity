#include "move_carts.hpp"
#include "reverse_stack.hpp"
#include "tree.hpp"
#include "util.hpp"

int main() {
}

void test_tree() {
    std::vector<int> data(3);
    for (int i = 0; i < 10; ++i) {
        data[i] = i;
    }

    TreeNode<int> *root = create_balanced_binary_search_tree(data);

    print_tree<int>(root);
}

void test_move_carts() {
    int n;

    std::cout << "Enter the number of items: ";
    std::cin >> n;

    move_items(n, 'A', 'B');
}

void test_reverse_stack() {
    std::stack<int> my_stack;
    for (int i = 0; i < 10; ++i) {
        my_stack.push(i * 10);
    }

    // at this point, stack should have:
    //  TOP [90, 80, ... 20, 10, 0] BOTTOM

    reverse_stack(my_stack);

    // at this point, stack should have:
    //  TOP [0, 10, 20, ... 80, 90] BOTTOM
    while (!my_stack.empty()) {
        std::cout << my_stack.top() << std::endl;
        my_stack.pop();
    }
}
