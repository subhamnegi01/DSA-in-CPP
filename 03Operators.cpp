#include <iostream>
using namespace std;

int main(){
    int a = 10, b = 5;

    // Arithmetic Operators
    cout<<"Arithmetic Operators:-"<<endl;
    cout<<"a+b: "<<a+b<<endl;
    cout<<"a-b: "<<a-b<<endl;
    cout<<"a*b: "<<a*b<<endl;
    cout<<"a/b: "<<a/b<<endl;
    cout<<"a%b: "<<a%b<<endl;

    //Relational Operators
    cout<<"\nRelational Operator:-"<<endl;
    cout<<"a>b: "<<(a>b)<<endl;
    cout<<"a<b: "<<(a<b)<<endl;
    cout<<"a==b: "<<(a==b)<<endl;
    cout<<"a != b: "<<(a!=b)<<endl;

    //Logical Operators
    cout<<"\nLogical Operators:-"<<endl;
    cout<<"(a>b && b>0): "<<(a>b && b>0)<<endl;
    cout<<"(a<b || b>0): "<<(a>b || b>0)<<endl;
    cout<<"!(a>b): "<<!(a>b)<<endl;

    //Assignment Operators
    cout<<"\nAssignment Operators:-"<<endl;
    a +=5;
    cout<<"a +=5: "<<a <<endl;
    a -=2;
    cout<<"a -=2: "<<a <<endl;

    //Increment & Decrement
    cout<<"\nIncrement and Decrement:-"<<endl;
    cout<<"++a: "<<++a<<endl;
    cout<<"--a: "<<--a<<endl;
    // Post Increment
    cout<<"a++: "<<a++<<endl;
    cout<<a<<endl;
    // Post Decrement
    cout<<"a--: "<<a--<<endl;
    cout<<a;
    return 0;
}