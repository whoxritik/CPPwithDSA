#include<iostream>
#include<vector>
using namespace std;
int main(){

    /*vector<int> v; //you need not mention the size
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";*/



    /*vector<int> v; //you need not mention the size
    //inserting / input do not use [] square brackets
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    //if you want to update / access then we can use []
    v[0] = 88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";*/



    /*vector<int> v;
    v.push_back(6);
    //v.push_back(1);
    v[1] = 1;
    v.push_back(9);
    v.push_back(10);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";*/



    /*vector<int> v;
    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    v.push_back(10);
    cout<<v.size()<<endl;*/



    /*vector<int> v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;*/



    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

}