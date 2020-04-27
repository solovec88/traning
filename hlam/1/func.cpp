#include<iostream>
using namespace std;

int Area(int lenght, int width); //прототип функции

int main()
{
    int lenghtOfYard, widthOfYard, areaOfYard;

    cout << "\n How wide is your yard? ";
    cin >> widthOfYard;
    cout << "\n How long is your yard? ";
    cin >> lenghtOfYard;

    areaOfYard = Area(lenghtOfYard, widthOfYard);

    cout << "\n Your yard is ";
    cout << areaOfYard;
    cout << " square feet\n\n";
    return 0;
}

int Area(int yardLength, int yardWidth)
{
    return yardLength + yardWidth;
}