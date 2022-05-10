#include <iostream>
#include <vector>

#pragma once
#ifndef onlist_h
#define onlist_h

struct List
{
    int value;
    List *previous = nullptr;
    List *next = nullptr;
    List (int val) : value(val) {};
    List (int val, List *pr) : value(val), previous(pr) {};
    List (int val, List *pr, List *n) : value(val), previous(pr), next(n) {};
};

class onList
{

private:
    List *first = nullptr;
    List *last = nullptr;
    int _size = 0;

public:
    void clear(); //ready
    onList(); //ready
    onList(int value); //ready
    onList(onList *rhs); //ready
    onList* operator=(onList *rhs); //ready
    ~onList(); //ready
    void push(int value); //ready
    void pop(); //ready
    int& top(); //ready
    const int& top() const; //ready
    int& operator[](int i); //ready
    const int& operator[](int i) const; //ready
    bool isEmpty(); //ready
    const bool isEmpty() const; //ready
    const int& size() const; //ready
    void popByIndex(int i); //ready
    void pushByIndex(int el, int i);


};

#endif /* onlist_h */