//program to check positive negative or zero using switch case
#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter any number=";
cin>>num;

switch(num>0){

case 1:
    cout<<"this number is positive number="<<num;
    break;
case 0:
    switch(num<0)
    {
    case 1:
        cout<<"this is negative number"<<num;
        break;
    case 0:
        cout<<"this is zero="<<num;
        break;
    }
    break;



}

return 0;
}
