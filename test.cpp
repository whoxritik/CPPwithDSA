#include <iostream>
#include<vector>
using namespace std;

int main() {
	int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int z = 0;
    int o = 0;
    for(int i=0; i<n; i++){
        if(v[i]==0) z++;
        else o++;
    }
    for(int i=0; i<n; i++){
        if(i<z) v[i]=0;
        else v[i] = 1;
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
