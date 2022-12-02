#include<iostream>
using namespace std;
int main(){


int days,week,year;

cout<<"enter any days"<<endl;
cin>>days;
cout<<"This is user input="<<days<<endl;


week=days%365;
year=days/365;

cout<<"this is week="<<week<<endl;
cout<<"this is year="<<year<<endl;

return 0;




}
