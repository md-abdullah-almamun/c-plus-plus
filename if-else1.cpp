// maximum between three numbers.
#include<iostream>
using namespace std;
int main(){
int num1,num2,num3;

cout<<"enter first number=";
cin>>num1;

cout<<"enter second number=";
cin>>num2;

cout<<"enter 3rd number=";
cin>>num3;

if((num1>num2) && (num1>num3))
    {

    cout<<"this is max number1="<<num1;

}
else if((num2>num1) && (num2>num3)){


    cout<<"this is max number2="<<num2;

}
else
    cout<<"this is max number3="<<num3;

    return 0;

}
