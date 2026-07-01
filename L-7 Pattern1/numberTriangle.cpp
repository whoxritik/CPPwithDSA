#include<iostream>
using namespace std;
int main(){

    //Ques: Print the given pattern
    // 1
    // 12
    // 123
    // 1234
    int n;
    cout<<"No of rows : ";
    cin>>n;
    //no. of stars = n+1-i
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}