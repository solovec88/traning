#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;
    
    cout << "Создаем папку" << endl;
    cout << "Укажите название папки: " << endl;
    cin >> name;
    cout << "Вы создали папку " << name << endl;
    system(("mkdir " + name).c_str()); 

    return 0;
}
