#include<iostream>
using namespace std;

//Ques:Combination and Permutation

//Calculating nCr without using functions
/*int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    int r;
    cout<<"enter r : ";
    cin>>r;

    int nfact = 1; // n!
    for(int i=2; i<=n; i++){
        nfact *= i;
    }

    int rfact = 1; // r!
    for(int i=2; i<=r;i++){
        rfact *= i;
    }

    int nrfact = 1; // (n-r)!
    for(int i=2; i<=n-r; i++){
        nrfact *= i;
    }

    int ncr = nfact/(rfact * nrfact);
    cout<<ncr;
}*/


//Caculating nCr using functions
/*int fact(int x){
    int f = 1;
    for(int i=2; i<=x; i++){
        f *= i;
    }
    return f;
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    int r;
    cout<<"enter r : ";
    cin>>r;

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncr = nfact/(rfact * nrfact);
    cout<<ncr;
}*/


//Calculation of combination and permutation using functions for both
int fact(int x){
    int f = 1;
    for(int i=2; i<=x; i++){
        f *= i;
    }
    return f;
}
int combination(int n, int r){
    int ncr = fact(n)/(fact(r) * fact(n-r));
    return ncr;
}
int permutation(int n, int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    
    int r;
    cout<<"enter r : ";
    cin>>r;

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncr = combination(n, r);
    int npr = permutation(n, r);
    cout<<ncr<<endl<<npr;

}