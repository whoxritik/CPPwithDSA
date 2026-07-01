#include<iostream>
#include<vector>
using namespace std;
int main(){

    /*vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }*/



    /*vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }*/



    /*vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }*/



    /*vector<int> v;  //  Size  Capacity
    v.push_back(6); //  1     1
    v.push_back(1); //  2     2
    v.push_back(9); //  3     4 
    v.push_back(10); // 4     4 
    v.push_back(9); //  5     8
    v.push_back(10); // 6     8
    v.push_back(1); //  7     8
    v.push_back(9); //  8     8
    v.push_back(10); // 9     16
    v.push_back(9); //  10    16
    v.push_back(10); // 11    16
    v.push_back(6); //  12    16
    v.push_back(1); //  13    16
    v.push_back(9); //  14    16
    v.push_back(10); // 15    16
    v.push_back(9); //  16    16
    v.push_back(10); // 17    32
    v.push_back(1); //  18    32
    v.push_back(9); //  19    32
    v.push_back(10); // 20    32
    v.push_back(9); //  21    32
    v.push_back(10); // 22    32
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;*/



    vector<int> v;  //  Size  Capacity
    v.push_back(6); //  1     1
    v.push_back(1); //  2     2
    v.push_back(9); //  3     4 
    v.push_back(10); // 4     4 
    v.push_back(9); //  5     8
    v.push_back(10); // 6     8
    v.push_back(1); //  7     8
    v.push_back(9); //  8     8
    v.push_back(10); // 9     16
    v.push_back(9); //  10    16
    v.push_back(10); // 11    16
    v.push_back(6); //  12    16
    v.push_back(1); //  13    16
    v.push_back(9); //  14    16
    v.push_back(10); // 15    16
    v.push_back(9); //  16    16
    v.push_back(10); // 17    32
    v.push_back(1); //  18    32
    v.push_back(9); //  19    32
    v.push_back(10); // 20    32
    v.push_back(9); //  21    32
    v.push_back(10); // 22    32
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;

}