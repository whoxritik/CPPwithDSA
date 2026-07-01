#include<iostream>
using namespace std;
int main (){

    //Ques: If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
    cout<<"Enter the Cost Price : ";
    int cp;
    cin>>cp;
    cout<<"Enter the Selling Price : ";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"Profit = "<<sp-cp;
    }
    if(cp>sp){
        cout<<"Loss = "<<cp-sp;
    }
    if(sp==cp){
        cout<<"No Profit, No Loss!";
    }

}