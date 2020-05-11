#include <iostream>
#include "example.h"

using namespace std;

int main(){
    int result;
    cout << "ЗАпускается программа" << endl;
    result = GetVal();
    cout << "Вывожу данные из файла example.h " << result << endl;
    return 0;
}

