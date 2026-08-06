#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int first =0, second =1,last;
    
    for(int i=1; i<=n; i++ )
    {
        cout<<first<<endl;
        last = first + second;
        first = second;
        second = last;
    }
    return 0;
}