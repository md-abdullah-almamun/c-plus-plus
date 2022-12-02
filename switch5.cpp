//program to check even or odd number using switch case
#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter any postive number=";
cin>>num;
switch(num%2){

case 0:
    cout<<"this number is even";
    break;
case 1:
    cout<<"this is number is odd";
    break;

}


return 0;
}
