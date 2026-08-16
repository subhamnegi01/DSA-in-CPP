#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& array, int n){

    int sum = 0;
    int ans;
    for(int i = 0; i<n-1; i++){
        sum = sum + array[i];

        ans = n*(n+1)/2;

    }
    return ans - sum;

}

int main(){
    vector<int> array = {1, 2, 4, 5};

    cout << missingNumber(array, 5);

    return 0;
}