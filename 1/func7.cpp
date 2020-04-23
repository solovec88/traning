//использование нескольких опреаторов return в теле функции

#include<iostream>
using namespace std;

int Doubler(int AmountToDouble);

int main(){

    int result = 0;
    int input;

    cout << "Enter a number between 0 and 10,000 to doouble: " << endl;
    cin >> input;

    cout << "Before double is called.... " << endl;
    cout << "input: " << input  << " doubled: " << result << endl;

    result = Doubler(input);

    cout << "Back from Doubler: " << endl;
    cout << "input: " << input << " doubled: " << result << endl;
    
    return 0;
}

int Doubler(int original){

    if (original <= 10000)
        return original * 2;
    else 
        return -1;
        cout << "You can't get here!" << endl;

}