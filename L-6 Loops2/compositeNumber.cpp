#include<iostream>
using namespace std;
int main(){

    //Ques : WAP to check if a number is composite or not.

    //composite number
    /*int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            cout<<n<<" is a composite number"<<endl;
        }
    }*/


    /*int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            cout<<n<<" is a composite number"<<endl;
            break;
        }
    }*/



    //prime and composite number
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool flag = true; //true means prime
    for(int i=2; i<=n-1; i++){
        if(n%i==0){ //i is a factor of n
            flag = false; //false means composite
            break;
        }
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if(flag==true) cout<<n<<" is prime";
    else cout<<n<<" is composite"<<endl;
}