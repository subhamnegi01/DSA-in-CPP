#include <iostream>
using namespace std;

int main(){
    int n, row, col;
    cout<<"Enter a number: ";
    cin>>n;
    int count = 1;
    for(row = 1; row<=n; row++){
        for(col=count; col <=n; col++){
            cout<<col*col*col<<" ";
        }
        cout<<endl;
    }
}