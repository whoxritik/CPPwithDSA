#include<iostream>
#include<climits>
using namespace std;
int main(){

    //Ques: Find the maximum value out of all the elements in the array.

    //1st method
    /*int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    //input elements in array
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    
    int max = arr[0];
    for(int i=1; i<=n-1; i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<max;*/



    //2nd method
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    //input elements in array
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    
    int max = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<max;

}