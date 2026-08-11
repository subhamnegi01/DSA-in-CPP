#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num > 0)
    {
        cout<<"It is positive number.";
    }
    else{
        if(num<0){
            cout<<"It is negative number.";
        }
        else{
            cout<<"The number is Zero.";
        }
    }
    return 0;
}