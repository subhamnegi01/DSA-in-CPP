#include <iostream>
using namespace std;

int main(){

    int arr[5]= {1,4,3,1,4};

    int sum =0;

    for(int i = 0; i<5; i++){
        sum = sum + arr[i];
    }
    cout<<sum;
    
    return 0;
}