#pragma once
#ifndef onList_hpp
#define onList_hpp
#include <unordered_map>

template <typename T>
class Tree
{
public:

    Tree()
    {
        root = new TreeNode();
        backToRoot();
    }

    const T& getValue() const
    {
        return actualTree -> value;
    }

    T getValue()
    {
        return actualTree -> value;
    }

    void setValue(const T& value)
    {
        actualTree ->value = value;
    }

    void addLeft()
    {
        if (actualTree -> left == nullptr)
        {
            actualTree -> left = TreeNode(actualTree);
            values.insert(std::pair<TreeNode*, T> (actualTree -> left, 0));
        }
    }

    void addRight()
    {
        if (actualTree -> right == nullptr)
        {
            actualTree -> right = TreeNode(actualTree);
            values.insert(std::pair<TreeNode*, T> (actualTree -> right, 0));
        }
    }

    void toLeft()
    {
        addLeft(); 
        actualTree = actualTree -> left;
    }
    void toRight()
    {
        addRight();
        actualTree = actualTree -> right;
    }
    const bool contains(const T &value) const
    {
        for (auto it = values.begin(); it != values.end(); ++it)
        {
            if (it -> second == value)
            {
                return true;
            }
        }
        return false;
    }

    bool contains(const T &value)
    {
        for (auto it = values.begin(); it != values.end(); ++it)
        {
            if (it -> second == value)
            {
                return true;
            }
        }
        return false;
    }

    void findByValue(const T& value)
    {   
        Tree *out;
        if (contains(value, out))
        {
            actualTree = out;
        }
    }
    void backToRoot()
    {
        actualTree = root;
    }

    void deleteLeft()
    {
        if (actualTree -> left == nullptr)
        {
            return;
        }
        actualTree -> left = actual
    }

private:
    struct TreeNode
    {
        T value = 0;
        TreeNode *head = nullptr;
        TreeNode *left = nullptr;
        TreeNode *right = nullptr;
        TreeNode() = default;
        TreeNode(TreeNode *head);
    };
    const bool contains(const T &value, TreeNode *out) const
    {
        for (auto it = values.begin(); it != values.end(); ++it)
        {
            if (it -> second == values)
            {
                out = it -> first;
                return true;
            }
            return false;
        }
    }
    TreeNode *root = nullptr;
    TreeNode *actualTree = nullptr;
    std::unordered_map<TreeNode*, T> values;
};

#endif /* onList_hpp */