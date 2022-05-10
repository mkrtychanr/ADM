#include <vector>
#include <iostream>

#pragma once
#ifndef onarray_h

class onArray
{
private:
    std::vector<int> stack;
    int _size = 0;
public: 
    onArray(); //ready
    onArray(int size); //ready
    onArray(int size, int el); //ready
    onArray(const onArray &rhs); //ready
    ~onArray() = default; //ready
    onArray& operator=(const onArray &rhs); //ready
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
    
};

#define onarray_h
#endif /* onarray_h */