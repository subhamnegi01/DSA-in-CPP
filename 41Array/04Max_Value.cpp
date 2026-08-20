#include <iostream>
using namespace std;

int main()
{
    int arr[5]= {23, 1, 32,  43, 11};
    int ans = INT8_MIN;

    for (int i = 0; i<5 ; i++){

        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    cout<<ans;
    return 0;
}