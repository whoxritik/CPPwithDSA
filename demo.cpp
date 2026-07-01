#include<iostream>
#include<vector>
using namespace std;
/*int main() {

    // int n;
    // cin>>n;

    // int arr[n];
    // for(int i=0; i<=n-1; i++){
    //     cin>>arr[i];
    // }

    // bool flag = false;

    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n-1;j++){
    //         if(arr[i]==arr[j]){
    //         flag = true;
    //         cout<<arr[i]<<endl;
    //         break;
    //         }
    //     }
    // }
    // if(flag==false) cout<<"No duplicate";



    // vector<int> v;
    // v.push_back(9);
    // v.push_back(10);
    // v.push_back(6);
    // v.push_back(12);
    // v.push_back(11);
    // v.push_back(6);
    // v.push_back(0);
    // cout<<v.size()<<endl;
    // for(int i=0; i<v.size(); i++){
    //     cout<<i<<" ";
    // }


    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++){
        cout<<v[i];
    }
}*/



//Reverse part of array

void display(vector<int>& a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int* p1, int* p2, vector<int>& v){
    for(int i=*p1,j=*p2; *p1<=*p2; (*p1)++,(*p2)--){
        int temp = v[*p1];
        v[*p1] = v[*p2];
        v[*p2] = temp;
    }
    return;
}
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);

    display(v);

    int i = 0;
    int j = 4;
    reversePart(&i,&j,v);

    display(v);
}