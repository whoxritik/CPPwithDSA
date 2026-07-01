#include<iostream>
using namespace std;
int main(){

    //Ques: Print the given pattern
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    /*int n;
    cout<<"No of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }*/


    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    int n;
    cout<<"No of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(j+96)<<" ";
        }
        cout<<endl;
    }
}