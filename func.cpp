#include <iostream>
#include <string>

using namespace std;

string Compare(int, int);

int main()
{    
    int value1 , value2;
    string result;

    cout << "Enter two number" << endl;
    cout << "Number 1: ";
    cin >> value1;
    cout << "Number 2: ";
    cin >> value2;

    result = Compare(value1, value2);

    cout << result << endl;

    return 0;
}

string Compare(int val1, int val2)
{
    string result = "";

    if (val1 < val2)
    {
        result = "Comparison Less Then";
    }
    else if (val1 > val2)
    {
        result = "Comparison Greater Then";
    }
    else 
    {
        result = "Comparison Equal";
    }
    return result;
}