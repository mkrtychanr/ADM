#include "onList.hpp"


// template <typename T>
// Tree<T>::Tree()
// {
//     root = new TreeNode();
//     actualTree = root;
// }


// template <typename T>
// const T& Tree<T>::getValue() const
// {
//     return actualTree -> value;
// }

// template <typename T>
// T Tree<T>::getValue()
// {
//     return actualTree -> value;
// }

// template <typename T>
// void Tree<T>::setValue(const T& value)
// {
//     actualTree -> value = value;
//     values[actualTree] = value;
// }

// template <typename T>
// void Tree<T>::addLeft()
// {
//     if (actualTree -> left == nullptr)
//     {
//         actualTree -> left = TreeNode(actualTree);
//         values.insert(std::pair<TreeNode*, T> (actualTree -> left, 0));
//     }
// }

// template <typename T>
// void Tree<T>::addRight()
// {
//     if (actualTree -> right == nullptr)
//     {
//         actualTree -> right = TreeNode(actualTree);
//         values.insert(std::pair<TreeNode*, T> (actualTree -> right, 0));
//     }
// }

// template <typename T>
// void Tree<T>::toLeft()
// {
//     addLeft();
//     actualTree = actualTree -> left;
// }

// template <typename T>
// void Tree<T>::toRight()
// {
//     addRight();
//     actualTree = actualTree -> right;
// }

// template <typename T>
// const bool Tree<T>::contains(const T &value, TreeNode *out) const
// {
//     for (auto it = values.begin(); it != values.end(); ++it)
//     {
//         if (it -> second == value)
//         {
//             out = it -> first;
//             return true;
//         }
//     }
//     return false;
// }

// template <typename T>
// const bool Tree<T>::contains(const T &value) const
// {
//     for (auto it = values.begin(); it != values.end(); ++it)
//     {
//         if (it -> second == value)
//         {
//             return true;
//         }
//     }
//     return false;
// }


// template <typename T>
// void Tree<T>::backToRoot()
// {
//     actualTree = root;
// }


// template <typename T>
// void Tree<T>::findByValue(const T& value)
// {
//     TreeNode *out;
//     if (contains(value, out))
//     {
//         actualTree = out;
//     }
// }

