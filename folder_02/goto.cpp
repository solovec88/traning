#include<iostream>
using namespace std;

int main(){
    int counter = 0;

lable:

    counter++;
    cout << "Counter = " << counter <<endl;

    if (counter < 3)
    {
        goto lable;
    }

    cout << "end";

    cin.get();
    return 0;
}