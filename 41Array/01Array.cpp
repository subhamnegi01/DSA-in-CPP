#include <iostream>
using namespace std;

int main (){
    //int arr[]= {1,2,3,4,4,5,4,2,5,3,10 };

    int arr[10];
    for(int i = 0; i<=10; i++){
        cin>>arr[i];
    }

    for(int i= 0; i<=10; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}