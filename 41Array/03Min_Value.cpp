#include <iostream>
using namespace std;

int main()
{
    int arr[5]= {2,2,4,1,9};
    int ans = INT8_MAX;

    for(int i = 0; i<5; i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }
    cout<<ans;
    return 0;
}