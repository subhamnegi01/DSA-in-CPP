#include <iostream>
using namespace std;

int main(){
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;
    
    if(n<2){
        cout<<"Not Prime number.";
        return 0;
    }
    else{
        for(i = 2; i<n; i++){
            if(n%i==0){
                cout<<"Not prime number";
                return 0;
            }
        }
        cout<<"Prime number.";
    }
    return 0;
}