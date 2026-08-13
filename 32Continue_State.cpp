#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i<=40; i++){
        if(i%4==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}