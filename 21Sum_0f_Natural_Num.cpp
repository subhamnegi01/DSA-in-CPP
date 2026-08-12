#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"Enter a num: ";
    cin>>n;

    int sum = 0;
    // int sum=(n*(n+1)/2);
    for(i =1; i<=n; i++){
        sum= sum+i;
        
    }
    cout<<sum;
    return 0;
}