#include <iostream>
#include <cmath>
#include <vector>

int factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n-1);
    }
    else return 1;
}

double first()
{
    int n = 0;
    int r = 0;
    std::cout<<"Enter n: ";
    std::cin>>n;
    std::cout<<"Enter r: ";
    std::cin>>r;
    return double(factorial(n))/double(factorial(n-r));
}

double second()
{
    int n = 0;
    int r = 0;
    std::cout<<"Enter n: ";
    std::cin>>n;
    std::cout<<"Enter r: ";
    std::cin>>r;
    return double(factorial(n))/double(factorial(n-r) * factorial(r));
}
//OK
double third()
{
    double n = 0;
    double r = 0;
    std::cout<<"Enter n: ";
    std::cin>>n;
    std::cout<<"Enter r: ";
    std::cin>>r;
    return pow(n, r);
}

double fourth()
{
    int n = 0;
    int r = 0;
    std::cout<<"Enter n: ";
    std::cin>>n;
    std::cout<<"Enter r: ";
    std::cin>>r;
    n += r - 1;
    return double(factorial(n))/double(factorial(n-r) * factorial(r));
}

double fifth()
{
    int n = 0;
    std::cout<<"Enter n: ";
    std::cin>>n;
    return double(factorial(n));
}
//OK
double sixth()
{
    int n = 0;
    int k = 0;
    std::cout<<"Enter n: ";
    std::cin>>n;
    std::cout<<"Enter k: ";
    std::cin>>k;
    std::vector<int> types(k);
    int sum = 0;
    bool isOk = false;
    while (!isOk)
    {
        sum = 0;
        for (int i = 0; i < k; i++)
        {
            std::cin>>types[i];
            sum += types[i];
        }
        if (sum == n)
        {
            isOk = true;
        }
    }
    sum = 1;
    for (int i = 0; i < k; i++)
    {
        sum *= factorial(types[i]);
    }
    return double(factorial(n))/double(sum);

}

double seventh()
{
    int n = 0;
    int m = 0;
    std::cout<<"Enter n: ";
    std::cin>>n;
    std::cout<<"Enter m: ";
    return double(n * m);
}

double e8()
{
    int n = 0;
    int m = 0;
    std::cout<<"Enter n: ";
    std::cin>>n;
    std::cout<<"Enter m: ";
    return double(n + m);
}

int main()
{
    int operation;
    bool status = true;
    std::cout<<"Enter a formula number: ";
    std::cin>>operation;
    double answer = 0;

    switch (operation)
    {

    case 1:
        answer = first();
        break;        
    case 2:
        answer = second();
        break;        
    case 3:
        answer = third();
        break;        
    case 4: 
        answer = fourth();
        break;        
    case 5:
        answer = fifth();
        break;        
    case 6:
        answer = sixth();
        break;        
    case 7:
        answer = seventh();
        break;        
    case 8:
        answer = e8();
        break;        
        
    default:
        std::cout<<"error...";
        status = false;
        break;
    }

    if (status)
    {
        std::cout<<"answer is: "<<answer<<std::endl;
    }
}