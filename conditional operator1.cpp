//find maximum between three numbers using conditional operator

#include<iostream>
using namespace std;
int main(){
int num1,num2,num3,max;

cout<<"enter first number=";
cin>>num1;

cout<<"enter second number=";
cin>>num2;

cout<<"enter 3rd number=";
cin>>num3;


max=(num1>num2 && num1>num3) ? num1 : (num2>num3) ? num2 : num3;

cout<<"this is max number="<<max;

return 0;


}
