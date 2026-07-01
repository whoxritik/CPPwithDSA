#include<iostream>
#include<vector>
using namespace std;
int main(){

    //at

    /*vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    cout<<v[2];*/



    /*vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    cout<<v.at(2);*/



    /*vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.at(2) = 90;
    cout<<v.at(2);*/



    //sort

    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    //sort
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
}