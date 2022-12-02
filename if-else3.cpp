//check whether a number is divisible by 5 and 11 or not
#include<iostream>
using namespace std;
int main(){

int num1;
cout<<"enter any number=";
cin>>num1;

if((num1%5==0) && (num1%11==0)){

    cout<<"number is divisible 5 and 11";

}
else
    cout<<"number is not divisible 5 and 11";

    return 0;
}
