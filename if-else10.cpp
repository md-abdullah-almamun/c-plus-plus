//program to enter week number and print day of week
#include<iostream>
using namespace std;
int main(){

int week;
cout<<"enter any week number=";
cin>>week;

if(week==1){
    cout<<"saturday ";
}
else if(week==2){
    cout<<"Sunday";
}
else if(week==3){
    cout<<"Monday";
}
else if(week==4){
    cout<<"Tuesday";
}
else if(week==5){
    cout<<"Wednesday";
}
else if(week==6){
    cout<<"Tuesday";
}
else if(week==7){
    cout<<"Friday";
}
else
    cout<<"invalid";
return 0;
}
