#include<iostream>
using namespace std;
int main(){
int num1,num2;
cout<<"enter two number input=";
cin>>num1>>num2;

switch(num1>num2){
    case 0:
        cout<<"maximum number2="<<num2;
        break;
    case 1:
        cout<<"maximum number1="<<num1;
        break;

}

return 0;

}
