#include <iostream>
using namespace std;

void myFunc();

int main(){
    int x = 5;
    cout << " In main x is: " << x << endl;

    myFunc();

    cout << " Back in main, x is: " << x << endl;
    return 0;
}

void myFunc() {
    int x = 8;
    cout << "in myFunc, local x: " << x << endl;
    {
        cout << " in block myFunc, x is: " << x << endl;
        int x = 9;
        cout << " Very local x: " << x << endl;
    }
    cout <<"Out of block, in myFunc x: " << x << endl;
}