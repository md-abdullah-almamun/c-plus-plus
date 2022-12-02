//C program to find all angles of a triangle if two angles are given

#include<iostream>
using namespace std;
int main()
{
    int angle1,angle2,result;

    cout<<"enter angle1 values=";
    cin>>angle1;
    cout<<"this is angle1 value="<<angle1<<endl;

    cout<<"enter angle2 values=";
    cin>>angle2;
    cout<<"this is angle2 values="<<angle2<<endl;

    result=180-(angle1+angle2);
    cout<<"this is final result="<<result;

    return 0;






}
