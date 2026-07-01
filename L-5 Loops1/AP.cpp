#include<iostream>
using namespace std;
int main (){

    //Ques : Display this AP – 1,3,5,7,9.. upto 'n' terms.
    /*int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i =1 ; i<=2*n-1; i+=2){
        cout<<i<<endl;
    }*/

    /*//separate variable
    // 1 3 5 7 9.....
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = 1;
    for(int i=1 ; i<=n; i++){
        cout<<a<<endl;
        a = a+2;
    }*/



    //separate variable
    // 4 7 10 13 17.....
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a = 4;
    for(int i=1 ; i<=n; i++){
        cout<<a<<endl;
        a = a+3;
    }
}