#include <iostream>
using namespace std;

int main(){
    cout<<"Select a starting number for decreasing order:-"<<endl;
    
    int num;
    cout<<"Enter a starting num: ";
    cin>>num;

    int num2;
    cout<<"Enter a ending num: ";
    cin>>num2;

    for(int i = num; i>=num2; i=i-1){
        cout<<i<<endl;
    }
    return 0;
}