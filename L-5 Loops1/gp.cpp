#include<iostream>
using namespace std;
int main (){

    //Ques : Display this GP – 1,2,4,8,16,32... upto 'n' terms.
    /*int n;
    cout<<"Enter a number : ";
    cin>>n;
    //1 2 4 8 16.... n terms
    int a = 1;
    for(int i=1 ; i<=n; i++){
        cout<<a<<endl;
        a = a+2;
    }*/



    int n;
    cout<<"Enter a number : ";
    cin>>n;
    //2 6 18 54.... n terms
    int a = 2;
    for(int i=1 ; i<=n; i++){
        cout<<a<<endl;
        a = a*3;
    }

}