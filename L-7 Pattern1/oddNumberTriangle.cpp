#include<iostream>
using namespace std;
int main(){

    //Ques: Print the given pattern
    // 1
    // 13
    // 135
    // 1357
    int n;
    cout<<"No of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // int a = 1;
        // for(int j=1; j<=i; j++){
        //     cout<<a;
        //     a += 2;
        // }

        //OR

        for(int j=1; j<=2*i-1; j+=2){
            cout<<j;
        }


        cout<<endl;
    }
}