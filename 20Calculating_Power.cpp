#include <iostream>
using namespace std;

int main(){
    int n, i, p,num;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>p;

    num = n;
    for(i=1; i<=p; i=i+1){
        num=num*n;
        cout<<num<<endl;
    }
    return 0;
}