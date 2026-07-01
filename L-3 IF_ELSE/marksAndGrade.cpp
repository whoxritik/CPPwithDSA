#include<iostream>
using namespace std;
int main (){

    /*Ques: Take input marks of a student and print the Grade according to marks:
        1) 91-100 Excellent
        2) 81-90 Very Good
        3) 71-80 Good
        4) 61-70 Can do better
        5) 51-60 Average
        6) 40-50 Below Average
        7) <40 Fail*/
    cout<<"Enter marks : ";
    int n;
    cin>>n;
    /*if(n>=91 && n<=100) {
        cout<<"Excellent";
    }
    if(n>=81 && n<=90) {
        cout<<"Very good";
    }
    if(n>=71 && n<=80){
        cout<<"Good";
    }
    if(n>=61 && n<=70) {
        cout<<"Can do better";
    }
    if(n>=51 && n<=60) {
        cout<<"Average";
    }
    if(n>=40 && n<=50) {
        cout<<"Below Average";
    }
    if(n<40) {
        cout<<"Fail";
    }*/

    
    /*if(n>=91){
        cout<<"Excellent";
    }
    else{
        if(n>=81){
            cout<<"Very Good";
        }
        else{
            if(n>=71){
                cout<<"Good";
            }
            else{
                if(n>=61) {
                    cout<<"Can do better";
                }
                else{
                    if(n>=51){
                        cout<<"Average";
                    }
                    else{
                        if(n>=41){
                            cout<<"Below Average";
                        }
                        else{
                            cout<<"Fail";
                        }
                    }
                }
            }
        }
    }*/


    if(n>=91){
        cout<<"Excellent";
    }
    else if(n>=81){
        cout<<"Very Good";
    }
    else if(n>=71){
        cout<<"Good";
    }
    else if(n>=61){
        cout<<"Can do better";
    }
    else if(n>=51){
        cout<<"Average";
    }
    else if(n>=41){
        cout<<"Below Average";
    }
    else{
        cout<<"Fail";
    }

}