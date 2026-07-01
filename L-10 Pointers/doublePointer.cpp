#include<iostream>
using namespace std;
int main(){

    /*int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<x<<endl; //5
    cout<<ptr<<endl; //0x16d0d27cc
    cout<<p<<endl; //0x16efa27c0 */



    /*int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<&x<<endl; //0x16fc027cc
    cout<<ptr<<endl; //0x16d0d27cc
    cout<<p<<endl; //0x16efa27c0 */



    /*int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<p<<endl;*/



    /*int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;*/



    /*int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*p<<endl; // x ka address */



    //Triple pointer
    int x = 5;
    int* ptr = &x;
    int** p = &ptr;
    int*** q = &p;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl;
    cout<<***q<<endl;

}