#include<iostream>
using namespace std;
int main(){

int num1;
int num2;
int teamp;

cout<<"enter first number=";
cin>>num1;

cout<<"enter second number=";
cin>>num2;

teamp=num1;
num1=num2;
num2=teamp;

cout<<"this is first number="<<num1<<endl;
cout<<"this is second number="<<num2<<endl;
return 0;

}
