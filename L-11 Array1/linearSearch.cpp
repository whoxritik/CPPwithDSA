#include<iostream>
using namespace std;
int main(){

    //Ques: Find the element x in the array . Take array and x as input.


    //wrong code
    /*int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    //input elemnts in array
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search : ";
    cin>>x;
    //search
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x) cout<<"present"<<endl;
        else cout<<"not present";
    }*/



    //Correct code
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    //input elements in array
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search : ";
    cin>>x;
    //check mark
    bool flag = false; //false -> not present
    //search
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true) cout<<"element found";
    else cout<<"404 element not found";

}