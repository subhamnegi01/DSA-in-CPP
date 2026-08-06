#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a num: ";
    cin>>num;
    int rem, mul=1, ans=0;

    while(num>0){
        //reminder
        rem = num%2;
        //quotient
        num = num/2;
        //ans
        ans = rem * mul + ans;
        //update mul
        mul= mul*10;

    }
    cout<<ans;
}