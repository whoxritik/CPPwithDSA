#include<iostream>
using namespace std;
int main (){

    //Ques: Write a program to input month number and print total number of days in month using switch case.
    int x;
    cout<<"enter month number : ";
    cin>>x;
    switch(x){
        case 1 : //Jan
            cout<<"31";
            break;
        case 2 : //Feb
            cout<<"28";
            break;
        case 3 : //March
            cout<<"31";
            break;
        case 4 : //April
            cout<<"30";
            break;
        case 5 : //May
            cout<<"31";
            break;
        case 6 : //June
            cout<<"30";
            break;
        case 7 : //July
            cout<<"31";
            break;
        case 8 : //Aug
            cout<<"31";
            break;
        case 9 : //Sep
            cout<<"30";
            break;
        case 10 : //Oct
            cout<<"31";
            break;
        case 11 : //Nov
            cout<<"30";
            break;
        case 12 : //Dec
            cout<<"31";
            break;
    }
}