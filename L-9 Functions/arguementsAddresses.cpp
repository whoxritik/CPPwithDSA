#include<iostream>
using namespace std;

/*void fun(int x, int y){
    cout<<"address of fun x "<<&x<<endl;
    cout<<"address of fun y "<<&y<<endl;
}
int main(){
    int x = 3;
    int y = 7;
    cout<<"address of main x "<<&x<<endl;
    cout<<"address of main y "<<&y<<endl;
    fun(x,y);
}*/



/*void f(){
    cout<<a;
}
int main(){
    int a = 9; // local variable
}*/



/*int a = 9; // global variable
void f(){
    cout<<a;
}
int main(){
    cout<<a+7<<endl;
    f();
}*/



/*int a = 9; // global variable
int main(){
    int a = 2; // local variable
    cout<<a<<endl; // the priority of local variable is more than global variable
}*/



/*int a = 9;
int main(){
    cout<<a<<endl;
    int a = 2;
    cout<<a<<endl;
}*/



/*int a = 9;
void fun(){
    cout<<a;
}
int main(){
    cout<<a<<endl;
    int a = 2;
    cout<<a<<endl;
    fun();
}*/



int a = 9;
int main(){
    a = 7;
    cout<<a;
}