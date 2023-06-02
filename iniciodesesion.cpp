#include <iostream>
using namespace std;

string password;
string user;
int i;

int main()
{for ( i = 0; i <=3 ; i++)
{
    /* code */
}

    cout << "Ingrese su usuario:" << endl;
    cin >> user;
    cout << "ingrese su password" << endl;
    cin >> password;

    if (user == "denisemg" && password == "kelron10")
    {
        cout << "Tu user y password es correcta. Bienvenido al sistema" << endl;
    }
    else
    {
        cout << "El user o el password es incorrecta" << endl;
    }

    return 0;
}