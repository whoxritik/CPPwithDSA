#include<iostream>
using namespace std;
int main(){

    /*int arr[] = {4,2,6,1,7};
    int* ptr = arr; //giving address
    cout<<ptr<<endl;
    cout<<ptr[0];*/



    /*int arr[] = {4,2,6,1,7};
    int* ptr = arr; //giving address
    cout<<ptr<<endl;
    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }*/



    /*int arr[] = {4,2,6,1,7};
    int* ptr = arr; //giving address
    cout<<ptr<<endl;
    ptr[0] = 8;
    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }*/



    /*int arr[] = {4,2,6,1,7};
    int* ptr = &arr[0]; //giving first element address
    cout<<ptr<<endl;
    ptr[0] = 8;
    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }*/



    /*int arr[] = {4,2,6,1,7};
    int* ptr = arr; //giving address
    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    *ptr = 8; //ptr[0] = 8;
    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }*/




    /*int arr[] = {4,2,6,1,7};
    int* ptr = arr; //giving address
    for(int i=0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;*/



    /*int arr[] = {4,2,6,1,7};
    int* ptr = arr; //ptr is pointing to 1st element
    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    *ptr = 8; //ptr[0] = 8;
    ptr++; //ptr is pointing to 2nd element
    *ptr = 9;
    ptr--; //ptr is pointing to 1st element
    for(int i=0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }*/



    /*int arr[] = {4,2,6,1,7};
    int* ptr = arr;
    for(int i=0; i<=4; i++){
        cout<<i[ptr]<<" ";
    }*/



    int arr[] = {4,2,6,1,7};
    int* ptr = arr;
    for(int i=0; i<=4; i++){
        cout<<i[arr]<<" ";
    }
    
}