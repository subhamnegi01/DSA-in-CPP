#include <iostream>
using namespace std;

int globalVar = 10;                   // Global Variable

void show(){
    int localVar = 12;                // Local Variable
    static int staticVar = 20;       //Static Variable
    
    cout<<"Local Variable: "<< localVar<<endl;
    cout<<"Static Variable: "<<staticVar<<endl;
    staticVar++;
}

int main(){
    show();
    show();             // StaticVar will remain its value

    return 0;
}