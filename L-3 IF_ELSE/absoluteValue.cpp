#include<iostream>
using namespace std;
int main(){

    //Ques: Given an integer. Print the absolute value of that integer.
    /*cout<<"Enter an Integer : ";
    int n;
    cin>>n;
    if(n>0){
        cout<<n;
    }
    else{ //n<=0
        cout<<-n;
    }*/

    cout<<"Enter an integer : ";
    int n;
    cin>>n;
    if(n<0){
        n = -n;
    }
    cout<<n;
}