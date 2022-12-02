//Program to check uppercase or lowercase alphabets
#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter any alphabets=";
cin>>ch;

if(ch >= 'A' && ch <= 'Z'){

    cout<<"this is uppercase letter";
}
else if(ch >= 'a' && ch <= 'z'){
    cout<<"this is lowercase letter";
}
else
    cout<<"this is not alphabets";

    return 0;
}
