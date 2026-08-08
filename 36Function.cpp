#include <iostream>
using namespace std;

int Sum(int m, int n)
{
    int ans = m+n;
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    // Function call

    cout<<Sum(a,b);
    cout<<endl;
}