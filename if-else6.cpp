////check whether a character is alphabet or not
#include<iostream>
using namespace std;
int main(){
 char ch;
 cout<<"enter any alphabets=";
 cin>>ch;

 if((ch>='a' && ch<='z')||(ch>='A') && (ch <='Z')){

    cout<<"this is alphabets";
 }
 else
    cout<<"this is not alphabets";



return 0;
}
