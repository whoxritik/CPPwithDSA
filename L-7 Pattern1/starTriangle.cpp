#include<iostream>
using namespace std;
int main(){

    //Ques: Print the given pattern
    // *
    // **
    // ***
    // ****
    int n;
    cout<<"No of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}