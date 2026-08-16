#include <iostream>
using namespace std;

void fun(int a[], int n){
    for (int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int arr[5]= {19,8,3,64,5};
    fun(arr, 5);
}