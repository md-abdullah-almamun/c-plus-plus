#include<iostream>
using namespace std;
int main(){

int years;
cout<<"enter any years=";
cin>>years;

if(((years%4==0) && (years%100!=0)) || (years%400==0))
{

    cout<<"this id leap year";

}
else
    cout<<"this is not leap year";
return 0;
}
