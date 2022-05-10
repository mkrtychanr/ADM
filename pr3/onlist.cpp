#include "onlist.h"
#include <iostream>

void onList::clear()
{
    if (!isEmpty())
    {
        this->~onList();
        first = nullptr;
        last = nullptr;
    }
}

onList::onList()
{
    while (first != nullptr)
    {
        first -> previous = nullptr;
        first = first -> next;
    }
    last = nullptr;
    _size = 0;
}

onList::onList(int value)
{
    clear();
    first = new List(value);
    last = first;
}

onList::onList(onList *rhs)
{
    operator=(rhs);
}

onList* onList::operator=(onList* rhs)
{
    clear();
    first = new List(rhs -> first -> value);
    last = first;
    rhs -> first = rhs -> first -> next;
    while (rhs -> first != nullptr)
    {
        last -> next = new List(rhs -> first -> value, last);
        last = last -> next;
        rhs -> first = rhs -> first -> next;
    }
    return this;
}

onList::~onList()
{
    while (!isEmpty())
    {
        pop();
    }
}

void onList::push(int value)
{
    if (first == nullptr)
    {
        first = new List(value);
        last = first;
    }
    else
    {
        last -> next = new List(value, last);
        last = last -> next;
    }
    _size++;
}

void onList::pop()
{
    if (!isEmpty())
    {
        last = last -> previous;
        _size--;
    }
}

int& onList::top()
{
    if (isEmpty()) throw std::logic_error("Empty...");
    return last -> value;
}

const int& onList::top() const
{
    if (isEmpty()) throw std::logic_error("Empty...");
    return last -> value;
}

int& onList::operator[](int i)
{
    if (i >= size()) throw std::logic_error("i >= size");
    List *temp = first;
    for (int j = 1; j <= i; j++)
    {
        temp = temp -> next;
    }
    return temp -> value;
}

const int& onList::operator[](int i) const
{
    if (i >= size()) throw std::logic_error("i >= size");
    List *temp = first;
    for (int j = 1; j <= i; j++)
    {
        temp = temp -> next;
    }
    return temp -> value;
}

bool onList::isEmpty()
{
    return size() == 0;
}

const bool onList::isEmpty() const
{
    return size() == 0;
}

const int& onList::size() const
{
    return _size;
}

void onList::popByIndex(int i)
{
    if (i >= size()) throw std::logic_error("i >= size");
    List *temp = first;
    for (int j = 1; j <= i; j++)
    {
        temp = temp -> next;
    }
    temp -> previous -> next = temp -> next;
    temp = nullptr;
    _size--;
}

void onList::pushByIndex(int el, int i)
{
    if (i < 0 || i > _size) throw std::logic_error("i < 0 || i > size");
    List *temp = first;
    for (int j = 1; j < i; j++)
    {
        temp = temp -> next;
    }
    temp -> next = new List(el, temp, temp -> next);
    temp -> next -> next -> previous = temp -> next;
    _size++;
}