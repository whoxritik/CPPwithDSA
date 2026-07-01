#include<iostream>
using namespace std;
int main(){
    /*int x = 7;
    int *ptr = &x;
    cout<<ptr<<endl; //0x16f1533ec
    ptr = ptr + 1;
    cout<<ptr<<endl; //0x16f1533f0 */



    /*bool flag = true;
    bool *ptr = &flag;
    cout<<ptr<<endl; //0x16f6033ef
    ptr = ptr + 1;
    cout<<ptr<<endl; //0x16f6033f0 */



    /*int x = 4;
    int *ptr = &x;
    cout<<*ptr<<endl; //4
    ptr = ptr + 1;
    cout<<*ptr<<endl; //1829058272 -> garbage value */



    /*int x = 4;
    int *ptr = &x;
    cout<<*ptr<<endl; //4
    *ptr = *ptr + 1; // x = x + 1
    cout<<*ptr<<endl; //5 */



    /*int x = 4;
    int *ptr = &x;
    cout<<*ptr<<endl;
    *ptr++; // warning
    cout<<*ptr<<endl; */



    /*int x = 4;
    int *ptr = &x;
    cout<<*ptr<<endl; //4
    (*ptr)++; // x = x + 1
    cout<<*ptr<<endl; //5 */



    int x = 4;
    int *ptr = &x;
    cout<<*ptr<<endl; //4
    (*ptr)--; // x = x - 1
    cout<<*ptr<<endl; //3
}