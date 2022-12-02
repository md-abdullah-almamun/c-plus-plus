//check even or odd number using conditional operator

 #include<iostream>
 using namespace std;
 int main()
 {
     int num1;

     cout<<"enter any number=";
     cin>>num1;


     cout<<"this is "<<(num1%2==0? "even":"odd");

     return 0;
 }
