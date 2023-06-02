#include <iostream>
using namespace std;
int num;

int main()
{

    cout << "Ingrese un numero entre 1-5" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Es el numero 1" << endl;
        break;
    case 2:
        cout << "Es el numero 2" << endl;
        break;
    case 3:
        cout << "Es el numero 3" << endl;
        break;
    case 4:
        cout << "Es el numero 4" << endl;
        break;
    case 5:
        cout << "Es el numero 5" << endl;
        break;
    default:
    cout<< "no esta en el rango de 1-5"<< endl;
        break;
    }

    return 0;
}