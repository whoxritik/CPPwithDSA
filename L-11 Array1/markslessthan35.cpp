#include<iostream>
using namespace std;
int main(){

    //Ques: Given an array of marks of students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array.]

    /*int marks[6];
    // input
    for(int i=0; i<=5; i++){
        cin>>marks[i];
    }

    for(int i=0; i<=5; i++){
        if(marks[i]<35) cout<<i<<" ";
    }*/



    int n;
    cout<<"enter no of students: ";
    cin>>n;
    int marks[n]; // index 0 to n-1
    cout<<"Enter the marks: ";
    for(int i=0; i<=n-1; i++){
        cin>>marks[i];
    }
    for(int i=0; i<=n-1; i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}