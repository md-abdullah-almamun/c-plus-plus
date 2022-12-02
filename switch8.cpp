//program to create calculator using switch case and functions
#include<iostream>
using namespace std;
int main(){
int num1,num2,result;
char op;

cout<<"WELCOME TO SIMPLE CALCULATOR=";
cout<<"----------------------------";
cout<<"Enter [number 1] [+ - * /] [number 2]=";
cin>>num1>>op>>num2;

 switch(op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            cout<<"Invalid operator";
    }

    /* Prints the result */
    cout<<"this is final result="<<num1<<op<<num2<<"="<<result;

    return 0;

}
