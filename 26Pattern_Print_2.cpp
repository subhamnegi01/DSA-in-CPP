#include <iostream>
using namespace std;

int main(){
    int n, row, col;
    cout<<"Enter a number for row and col: ";
    cin>>n;
    int count = 0;
    for(row = 1; row<=n; row++){
        count = count + 1;
        for(col = 1; col<=n; col++){
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}