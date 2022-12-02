//Program to check triangle validity when angles are given
#include<iostream>
using namespace std;
int main(){
int angle1,angle2,angle3,sum;

cout<<"enter three angle of triangle=";
cin>>angle1>>angle2>>angle3;

sum=angle1+angle2+angle3;

if(sum==180 && angle1>0 && angle2>0 && angle3>0){
    cout<<"triangle is valid";
}
else
    cout<<"this triangle is not valid";

    return 0;

}
