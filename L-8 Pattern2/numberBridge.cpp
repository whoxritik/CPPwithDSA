#include <iostream>
using namespace std;
int main(){

    //Ques : Print the given pattern
    //1234567
    //123 567
    //12   67
    //1     7
    int n;
    cout<<"No of lines : ";
    cin>>n;
    //2n-1 numbers in 1st line
    for(int i=1; i<=2*n-1; i++){
        cout<<i;
    }
    cout<<endl;
    int m = n-1; // new lines
    int nsp = 1;
    for(int i=1; i<=m; i++){
        //numbers
        int a = 1; // extra variable to maintain the count of numbers
        for(int j=1; j<=m+1-i; j++){
            cout<<a;
            a++;
        }
        //spaces
        for(int k=1; k<=nsp; k++){
            cout<<" ";
            a++; // to maintain the count of numbers in the next line
        }
        nsp+=2;
        //numbers
        for(int j=1; j<=m+1-i; j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}