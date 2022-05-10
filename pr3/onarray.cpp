#include "onarray.h"
#include <vector>
#include <iostream>

onArray::onArray()
{
    stack.clear();
    _size = 0;
}

onArray::onArray(int size)
{
    stack = std::vector<int> (size);
    _size = size;
}

onArray::onArray(int size, int el)
{
    stack = std::vector<int> (size, el);
    _size = size;
}

onArray::onArray(const onArray &rhs)
{
    operator=(rhs);
}


onArray& onArray::operator=(const onArray &rhs)
{
    stack = rhs.stack;
    _size = rhs._size;
    return *this;
}

void onArray::push(int value)
{
    stack.push_back(value);
    _size++;
}

void onArray::pop()
{
    stack.pop_back();
    _size--;
}

int& onArray::top()
{
    if (isEmpty()) throw std::logic_error("stack is empty");
    return stack.back();
}

const int& onArray::top() const
{
    if (isEmpty()) throw std::logic_error("stack is empty");
    return stack.back();
}

int& onArray::operator[](int i)
{
    if (i >= _size) throw std::logic_error("i >= size");
    return stack[i];
}

const int& onArray::operator[](int i) const
{
    if (i >= _size) throw std::logic_error("i >= size");
    return stack[i];
}

bool onArray::isEmpty()
{
    return _size == 0;
}

const bool onArray::isEmpty() const
{
    return _size == 0;
}

const int& onArray::size() const
{
    return _size;
}

void onArray::popByIndex(int i)
{
    if (i >= size()) throw std::logic_error("i >= size");
    stack.erase(stack.begin() + i);
    _size--;
}

