#include <iostream>
using namespace std;

int main()
{
    int lines = 15;
    int sublines = 30;
    char symbol = '*';

    for (int i = 1; i <= lines; i++){

        if (i == 1  || i == lines){
            for (int j = 1; j <= sublines; j++){
                cout << symbol;
            }
        }
        else {
            cout << symbol;
            for (int j =1; j <= sublines - 2; j++){
                cout << " ";
            }
        cout << symbol;
   
        
    }
    cout << endl;
}
return 0;
}    
