//Подставляемые функции inline-функции

#include<iostream>
using namespace std;

inline int Double(int);

int main(){
    int target;

    cout << "Enter a nomber to workwith: " << endl;
    cin >> target;
    cout << endl;

    target = Double(target);

    cout << "Target: " << target <<endl;
    target = Double(target);

    cout << "Target: " << target <<endl;
    target = Double(target);

    cout << "Target: " << target <<endl;
    target = Double(target);

    return 0;
    
}

int Double(int target){
    return 2 * target;
}