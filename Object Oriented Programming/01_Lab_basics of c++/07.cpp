//This is the c++ program to implement the 
//switch case operators. I have put the cases 1,2,3,4 as +,-,*,/

#include<iostream>
int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout<<"########## CALCULATOR ##########'\n'";

    std::cout<<"Enter either(+ - * /):";
    std::cin>>op;

    std::cout<<"Enter number *1:";
    std::cin>>num1;

    std::cout<<"Enter number *2:";
    std::cin>>num2;

    switch(op){
        case '+':
        result=num1+num2;
        std::cout<<"result:"<<result<<'\n';
        break;

        case '-':
        result=num1-num2;
        std::cout<<"result:"<<result<<'\n';
        break;

        case '*':
        result=num1*num2;
        std::cout<<"result:"<<result<<'\n';
        break;

        case '/':
        result=num1/num2;
        std::cout<<"result:"<<result<<'\n';
        break;

        default:
        std::cout<<"Please enter the Valid Opetator";
    }


    return 0;



}
