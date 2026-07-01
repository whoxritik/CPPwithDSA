#include<iostream>
using namespace std;
int main (){

    //Ques: Write a program to input week number(1-7) and print day of week name using switch case.
    int x;
    cout<<"enter day number : ";
    cin>>x;
    /*switch (x){
        case 1 :
            cout<<"Monday";
        case 2 :
            cout<<"Tuesday";
        case 3 :
            cout<<"Wednesday";
        case 4 :
            cout<<"Thursday";
        case 5 :
            cout<<"Friday";
        case 6 :
            cout<<"Saturday";
        case 7 :
            cout<<"Sunday";
    }*/

    switch (x){
        case 1 :
            cout<<"Monday";
            break;
        case 2 :
            cout<<"Tuesday";
            break;
        case 3 :
            cout<<"Wednesday";
            break;
        case 4 :
            cout<<"Thursday";
            break;
        case 5 :
            cout<<"Friday";
            break;
        case 6 :
            cout<<"Saturday";
            break;
        case 7 :
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid Number";
    }
}