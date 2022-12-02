//Program to check equilateral, scalene or isosceles triangle
#include<iostream>
using namespace std;
int main(){

int side1,side2,side3;


cout<<"enter three sides of triangle=";
cin>>side1>>side2>>side3;

    if(side1==side2 && side2==side3)
    {
        /* If all sides are equal */
        cout<<"Equilateral triangle.";
    }
    else if(side1==side2 || side1==side3 || side2==side3)
    {
        /* If any two sides are equal */
        cout<<"Isosceles triangle.";
    }
    else
    {
        /* If none sides are equal */
        cout<<"Scalene triangle.";
    }

    return 0;



}
