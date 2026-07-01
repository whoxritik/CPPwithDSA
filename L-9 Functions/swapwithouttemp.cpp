#include <iostream>
using namespace std;

// Ques: Swap 2 numbers

// Without using extra variable
/*int main(){
    int a, b;
    cin>>a>>b; // a = 3, b = 6
    a = a + b; // a = 9 (3 + 6)
    b = a - b; // b = 3 (9 - 6)
    a = a - b; // a = 6 (9 - 3)
    cout<<a<<" "<<b;
}*/



// Why does this not work?
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int a, b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}