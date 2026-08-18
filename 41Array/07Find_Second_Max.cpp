#include <iostream>
#include <climits>
using namespace std;

int print2largest(int arr [], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i<n; i++){
        if (arr[i]>ans){
            ans = arr[i];
        }
    }
    int second = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]!=ans){
            second= max(second, arr[i]);
        }
    }
    return second;
}

int main (){
    int arr[6] = {2, 4, 5, 6 ,3, 8};
    cout<<print2largest(arr, 6);

    return 0;
}