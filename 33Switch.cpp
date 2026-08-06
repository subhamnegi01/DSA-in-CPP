#include <iostream>
using namespace std;

int main(){

    int i ;
    cout<<"Enter a number between 1 to 7: ";
    cin>>i;

    switch(i){
        case 1:
        cout<<"Sunday";
        break;

        case 2:
        cout<<"Monday";
        break;

        case 3:
        cout<<"Tuesday";
        break;

        case 4:
        cout<<"Wednesday";
        break;

        case 5:
        cout<<"Thrusday";
        break;

        case 6:
        cout<<"Friday";
        break;

        case 7:
        cout<<"Saturday";
        break;

        default:
        cout<<"Enter a valid number.";
    }
    return 0;
}