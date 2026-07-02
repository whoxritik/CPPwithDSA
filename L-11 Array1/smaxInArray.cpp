#include<iostream>
using namespace std;
int main(){

    //Ques: Find the second largest element in the given Array.
    
    //with two loops
    /*int n;
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

    int smax = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i]!=max && smax<arr[i]) smax = arr[i];
    }
    cout<<max<<endl;
    cout<<smax;*/

    


    //with only one pass
    int n;
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
    }
}