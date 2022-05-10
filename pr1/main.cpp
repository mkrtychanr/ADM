#include "numbers.h"
#include <iostream>
#include <string>


int main()
{
    /*
    int power;
    int operation;
    bool calcIsWork = true;
    bool numberStatus = false;
    std::string request;
    Numbers number1;
    Numbers number2;
    std::cout<<"Welcome to demoCalculator!!!"<<std::endl<<std::endl;
    while (calcIsWork)
    {
        std::cout<<"Enter power of number\nFor exit submit 0\nYour choise: ";

        std::cin>>power;
        if (power == 0)
        {
            calcIsWork = false;
            std::cout<<"\nGoodbye"<<std::endl;
        }
        else if (power != 2 && power != 8 && power != 16)
        {
            std::cout<<"Wrong power of number"<<std::endl<<std::endl;
        }
        else
        {
            std::cout<<power<<std::endl;
            std::cout<<"\nEnter first number: ";
            std::cin>>request;
            number1 = Numbers(request, power);
            std::cout<<"\nEnter second number: ";
            std::cin>>request;
            number2 = Numbers(request, power);
            std::cout<<"\nSelect operation\n+ – 1\n- – 2\n* – 3\n/ – 4\nYour choise: ";
            std::cin>>operation;
            std::cout<<"\nResult is ";
            switch (operation)
            {
            case 1:

                std::cout<<Numbers(number1 + number2).GetNumber(power)<<std::endl;
                break;

            case 2:

                std::cout<<Numbers(number1 - number2).GetNumber(power)<<std::endl;
                break;

            case 3:

                std::cout<<Numbers(number1 * number2).GetNumber(power)<<std::endl;
                break;

            case 4:

                std::cout<<Numbers(number1 / number2).GetNumber(power)<<std::endl;

            default:

                std::cout<<"\nOps... Wrong operation"<<std::endl;
                break;
            }
        }
    }*/
    
    int power1 = 0;
    int power2 = 0;
    int answerPower = 0;
    std::string number1 = "";
    std::string number2 = "";

    std::cout<<"Enter first power number: ";
    std::cin>>power1;
    std::cout<<"Enter first value: ";
    std::cin>>number1;
    std::cout<<"Enter second power number: ";
    std::cin>>power2;
    std::cout<<"Enter second value: ";
    std::cin>>number2;

    std::cout<<"\nSelect operation\n+ – 1\n- – 2\n* – 3\n/ – 4\nYour choise: ";
    int operation = 0;
    std::cin>>operation;

    Numbers answer;
    switch (operation)
            {
            case 1:

                answer = Numbers(number1, power1) + Numbers(number2, power2);
                break;

            case 2:

                answer = Numbers(number1, power1) - Numbers(number2, power2);
                break;

            case 3:

                answer = Numbers(number1, power1) * Numbers(number2, power2);
                break;

            case 4:

                answer = Numbers(number1, power1) / Numbers(number2, power2);
                break;

            default:

                std::cout<<"\nOps... Wrong operation"<<std::endl;
                break;
            }
    std::cout<<"Enter answer power: ";
    std::cin>>answerPower;
    std::cout<<"Answer is: "<<answer.GetNumber(answerPower)<<std::endl;



}