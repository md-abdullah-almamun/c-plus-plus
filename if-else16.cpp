//Program to calculate profit or loss

#include<iostream>
using namespace std;
int main(){
int cp,sp, amt;

cout<<"Enter cost price: ";
cin>>cp;

cout<<"Enter selling price:";
cin>>sp;

if(sp > cp)
    {
        /* Calculate Profit */
        amt = sp - cp;
        cout<<"Profit = "<< amt;
    }
    else if(cp > sp)
    {
        /* Calculate Loss */
        amt = cp - sp;
        cout<<"Loss = "<<amt<<endl;
    }
    else
    {
        /* Neither profit nor loss */
        cout<<"No Profit No Loss.";
    }

    return 0;

}
