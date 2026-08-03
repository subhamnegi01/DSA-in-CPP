#include <iostream>
using namespace std;

int main(){
    //char n;
    int row, col;
    //cout<<"Enter a alphabet: ";
    //cin>>n;

    for(row = 1; row<=5; row++){
        char name = 'a'+(row-1);
        for(col=1; col<=5; col++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}