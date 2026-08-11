#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a valid number for day: ";
    cin>>num;
    
    if(num==1){
        cout<<"Sunday";
    }
    else if(num==2){
        cout<<"Monday";
    }
    else if(num==3){
        cout<<"Tuesday";
    }
    else if(num==4){
        cout<<"Wednesday";
    }
    else if(num==5){
        cout<<"Thrusday";
    }
    else if(num==6){
        cout<<"Friday";
    }
    else if(num==7){
        cout<<"Saturday";
    }
    else{
        cout<<"Invalid Number";
    }
    return 0;
}