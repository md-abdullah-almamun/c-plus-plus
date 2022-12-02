//C program to convert temperature from degree celsius to fahrenheit

#include<iostream>
using namespace std;
int main(){

float fah,cel;

cout<<"enter any number=";
cin>>cel;
cout<<"this is celsius value="<<cel<<endl;

fah=(cel * 9/5) +32;

cout<<"this is fahrenheit= "<<fah<<endl;

return 0;


}
