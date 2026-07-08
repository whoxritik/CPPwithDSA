#include<iostream>
#include<climits>
using namespace std;
int main(){

    //Calculate the product of all the elements in the given array.
    /*int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int product = 1;
    for(int i=0; i<=n-1; i++){
        product = product * arr[i];
    }
    cout<<product;*/



    //Find the second largest element in the given Array in one pass.
    /*int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    cout<<max<<endl;
    if(smax==INT_MIN) {
        cout<<"No second largest element";
    } else{
        cout<<smax;
    }*/



    //Find the minimum value out of all elements in the array.
    /*int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int min = INT_MAX;
    for(int i=0; i<=n-1; i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<min;*/



    //Given an array, predict if the array contains duplicates or not.
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<=n-1; i++){
    //     cin>>arr[i];
    // }
    // bool flag = false;
    // for(int i=0; i<=n-1; i++){
    //     for(int j=i+1; j<=n-1; j++){
    //         if(arr[i]==arr[j]){
    //             flag=true;
    //             cout<<arr[i]<<endl;
    //             break;
    //         }
    //     }
    // }
    // if(flag==false) cout<<"NO duplicates";

    int k=3;
    int f = 0;
    while(f>3){
        cout<<"hello";
    }
    
}