#include<iostream>
using namespace std;

class Cat {
    public:
        int itsAge;
        int itsWeight;        
};

int main()
{
Cat Friscky;
Friscky.itsAge = 5;
cout << "Friscky is a cat who is ";
cout << Friscky.itsAge << " yaer old\n";
return 0;
}


