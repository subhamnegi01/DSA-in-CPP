#include <iostream>
using namespace std;

int main()
{
    int n, row, col, count=1;
    cout<<"Enter a number: ";
    cin>>n;

    for(row =1; row<=n; row++)
    {
        for(col= 1; col<=n; col++)
        {
            cout<<count<<" ";
            count= count+1;
        }
        cout<<endl;
    }
    return 0;
}