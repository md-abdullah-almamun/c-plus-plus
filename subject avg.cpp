#include<iostream>
using namespace std;
int main()
{

    float num1,num2,num3,num4,num5;
    float sum,avg;


    cout<<"enter any number=";
    cin>>num1;
    cout<<"this is number1="<<num1<<endl;


    cout<<"enter any number";
    cin>>num2;
    cout<<"this is number2="<<num2<<endl;

    cout<<"enter any number=";
    cin>>num3;
    cout<<"this number3="<<num3<<endl;

    cout<<"enter any number=";
    cin>>num4;
    cout<<"this is number4="<<num4<<endl;

    cout<<"enter any number=";
    cin>>num5;
    cout<<"this is number5="<<num5<<endl;

sum=num1+num2+num3+num4+num5;
cout<<"this is sum="<<sum<<endl;

avg=sum/5;
cout<<"this is avg="<<avg<<endl;

return 0;

}
