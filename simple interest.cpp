#include<iostream>
using namespace std;
int main(){
float principle, time, rate, SI;

cout<<"enter principle amount=";
cin>>principle;
cout<<"this is principle value="<<principle<<endl;

cout<<"enter time=";
cin>>time;
cout<<"this is time="<<time<<endl;


cout<<"enter rate=";
cin>>rate;
cout<<"this is rate value="<<rate<<endl;

SI = (principle * time * rate) / 100;

cout<<"this is total SI="<<SI<<endl;

return 0;


}
