#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int i=0,j=n-1; i<j; i++,j--){
        int t = v[i];
        v[i] = v[j];
        v[j] = t;
    }

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}