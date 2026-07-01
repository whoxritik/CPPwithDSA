#include<iostream>
using namespace std;

/*void display(int a[]){
    for(int i=0; i<=4; i++){
        cout<<a[i]<<" ";
    }
    return;
}
int main(){
    int arr[5] = {1,4,2,7,4};
    //accessing the elements of array in another function
    //updation, pass by value / pass by reference ?
    display(arr);
}*/



/*void display(int a[]){
    for(int i=0; i<=4; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[]){
    b[0] = 100;
}

int main(){

    int arr[5] = {1,4,2,7,46};
    //accessing the elements of array in another function
    //updation, pass by value / pass by reference ?
    display(arr);
    change(arr);
    display(arr);
}*/



/*void display(int a[]){
    int size = sizeof(a) / sizeof(a[0]);
    return;
}

int main(){
    int arr[5] = {1,4,2,7,46};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr);
}*/



void display(int a[], int size){
    for(int i=0; i<=4; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[], int size){
    b[0] = 100;
}

int main(){

    int arr[5] = {1,4,2,7,46};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;
    //accessing the elements of array in another function
    //updation, pass by value / pass by reference ?
    display(arr, size);
    change(arr, size);
    display(arr, size);
}