//program to check vowel or consonant
#include<iostream>
using namespace std;
int main(){

char ch;
cout<<"enter any character=";
cin>>ch;

if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u' || ch=='A' || ch=='E'|| ch=='I' || ch=='O'|| ch=='U'){
    cout<<"this is vowel";
}
else if((ch>='a'&& ch<='z')||(ch>='A' && ch>='Z')){
 cout<<"this is consonant";

}

else
    cout<<"this is not an alphabet=";
return 0;
}
