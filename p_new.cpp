#include <iostream>
using namespace std;

int main()
{
    int *pAge = new int;

    cout << "Enter you age: " ;
    cin >> *pAge;

    cout << "Age " << *pAge << " is stored at 0x" << pAge << endl;
    cout  << "byte Age: " << sizeof(*pAge) << endl;
    delete pAge;
    return 0;
}