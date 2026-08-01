#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=1; i<=a; i=i+1){
        
        if(i%2==0){
            cout<<i<<" "<<endl;
        }
    }
    return 0;
}