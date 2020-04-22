#include<iostream>
using namespace std;

float Convert(float TempFer){
    float TempCel;
    TempCel = ((TempFer- 32) * 5) / 9;
    return TempCel;
}

int main(){
    float TempFer, TempCel;

   cout << "Please enter the temperature in Fahrenheit: ";
    cin >> TempFer;
    TempCel = Convert(TempFer);
    cout << "\n Here's the temperature in Celsius:";
    cout << TempCel << endl;
    return 0;
}

int main(){
    float TempFer, TempCel;

   cout << "Please enter the temperature in Fahrenheit: ";
    cin >> TempFer;
    TempCel = Convert(TempFer);
    cout << "\n Here's the temperature in Celsius:";
    cout << TempCel << endl;
    return 0;
}