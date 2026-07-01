#include<iostream>
using namespace std;
int main (){

    //Ques: Given the marks of the student. If the marks are greater than 33 print the result as pass otherwise fail without using if-else statement.
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    // condition ? true : false;
    marks>33 ? cout<<"Pass" : cout<<"Fail";
}