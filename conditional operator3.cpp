//check leap year using Conditional operator
#include<iostream>
using namespace std;
int main()
{
    int year;

    cout<<"enter any years=";
    cin>>year;

    cout<<"this is result="<<((year%4==0 && year%100!=0) ?"LEAP YEAR" : (year%400 ==0 ) ?"LEAP YEAR" : "COMMON YEAR");
}
