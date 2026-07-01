#include <iostream>
using namespace std;
int main(){

    //Ques : Print the given pattern
    //1
    //21
    //321
    //4321
    int n;
    cout<<"No of lines : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}