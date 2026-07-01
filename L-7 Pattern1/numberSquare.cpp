#include<iostream>
using namespace std;
int main(){

    //Ques : Print the given pattern
    // 1234
    // 1234
    // 1234
    // 1234
    int n;
    cout<<"No of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        cout<<j;
        }
        cout<<endl;
    }
}