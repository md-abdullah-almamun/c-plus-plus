//program to check whether a character is alphabet, digit or special character
#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter any one=";
cin>>ch;
// if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
if((ch>='a' && ch<='z') || (ch>='A'&& ch<='Z')){
cout<<"this is Alphabet";
}
//else if(ch >= 48 && ch <= 57)
else if(ch>='0 '&& ch<='9'){
    cout<<"this is digit";
}
else
cout<<"this is special character";

return 0;
}
