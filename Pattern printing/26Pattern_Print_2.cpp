#include <iostream>
using namespace std;

int main(){
    int n, row, col;
    cout<<"Enter a number for row and col: ";
    cin>>n;
    int count = 0;
    for(row = 1; row<=n; row++){
        for(col = 1; col<=n; col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
    return 0;
}