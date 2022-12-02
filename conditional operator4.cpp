//Program to check alphabets using conditional operator
#include<iostream>
using namespace std;
int main(){

char ch;
cout<<"enter any character=";
cin>>ch;

cout<<(ch>='a' && ch<='z') || (ch>='A' && ch<) ? "alphabet" : "not alphabet"<<endl;

return 0;

}
