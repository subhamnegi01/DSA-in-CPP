#include <iostream>
using namespace std;

int main()
{
    char n, row, col;
    cout<<"Enter a alpabet: ";
    cin>>n;

    for(row='a'; row<=n; row++){
        for(col='a'; col<=n; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}