#include <iostream>
using namespace std;

bool Prime(int n){
    if (n<2){
        return 0;
    }
    for(int i =1; i<n; i++){
        if(n%i==0){
            return 0;
        }

    }
    return 1;
}

int fact(int n){
    int ans = 1;
    for(int i = 1; i<=n; i++){
        ans = ans *i;
    }
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter the number: ";
    cin>>a>>b;

    // a is prime is not
    cout<<Prime(a)<<endl;

    // factorial of a
    cout<<fact(a)<<endl;

    // b is prime
    cout<<Prime(b)<<endl;

    // factorial of b
    cout<<fact(b)<<endl;

    // b-a is parime or not
    cout<<Prime(b-a)<<endl;

    // b-a 's factorial
    cout<<fact(b-a)<<endl;
}