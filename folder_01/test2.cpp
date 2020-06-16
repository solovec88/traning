#include<iostream>
using namespace std;

    class Cat
    {
    public:
        unsigned int itsAge;
        unsigned int itsWeight;
        void Meow();
    } ;
int main() {
    Cat Boots;
    Boots.itsAge = 5;
    cout << Boots.itsAge << endl;
}