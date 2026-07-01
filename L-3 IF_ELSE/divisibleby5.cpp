#include<iostream>
using namespace std;
int main(){

    //Ques: Take positive integer input and tell if it is divisible by 5 or not.
    cout<<"Enter a Number : ";
    int n;
    cin>>n;
    if(n%5 == 0){
        cout<<"Divisible by 5";
    }
    else{
        cout<<"Not divisible by 5";
    }

}