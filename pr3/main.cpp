#include <iostream>
#include "onlist.h"
#include "onarray.h"

int main()
{
    /*
    onList a = onList();
    a.push(0);
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    a.push(7);
    a.push(8);
    a.push(9);
    onList b = onList(a);
    for (int i = 0; i < a.size(); i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
    a.popByIndex(5);
    for (int i = 0; i < a.size(); i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> s {1, 2, 3, 4, 5, 6};
    std::vector<int> t = s;
    for (int i = 0; i < t.size(); i++)
    {
        std::cout<<t[i]<<" ";
    }
    std::cout<<std::endl;
    */
   /*
    onArray a = onArray();
    a.push(0);
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    a.push(7);
    a.push(8);
    a.push(9);
    for (int i = 0; i < a.size(); i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
    a.popByIndex(5);
    for (int i = 0; i < a.size(); i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;

    onArray b = onArray(a);
    for (int i = 0; i < b.size(); i++)
    {
        std::cout<<b[i]<<" ";
    }
    std::cout<<std::endl;

    a.pop();

    std::cout<<a.top()<<std::endl;
    std::cout<<b.top()<<std::endl;
    */

   onList stack = onList();

    stack.push(0);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);

    stack.pop();

    std::cout<<std::endl;
    stack.pushByIndex(100, 3);
    while (!stack.isEmpty())
    {
        std::cout<<stack.top()<<" ";
        stack.pop();
    }
    



}