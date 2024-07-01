#pragma once

#include <iostream>

template<typename T>
class TreeNode {
public:
    T value;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode() = default;

    explicit TreeNode(const T &value) : value(value), left(nullptr), right(nullptr) {}
};