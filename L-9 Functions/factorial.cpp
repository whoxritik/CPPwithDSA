#include<iostream>
using namespace std;

// Bonus Ques : Print factorial of first n numbers

/*int fact(int n){
    int fact = 1;
    for(int i=2; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<fact(i)<<endl;
    }
}*/


//without using function
/*int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int fact = 1;
        for(int j=2; j<=i; j++){
            fact *= j;
        }
        cout<<fact<<endl;
    }
}*/


// IInd method without using function
int main(){
    int n;
    cin>>n;
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact *= i;
        cout<<fact<<endl;
    }
}