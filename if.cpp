#include <iostream> //estructura de condicional
using namespace std;

int main()
{

    int numero, dato = 5;
    cout << "Ingrese un numero" << endl;
    cin >> numero;
    /*if (numero == dato)
    {
        cout << "El numero es 5" << endl;
    }
    else
    {
        cout << "El numero es diferente a 5" << endl;
    }*/

    // Distinto a (numero !=)

    /*if (numero != dato)
    {
        cout << "El numero NO es 5" << endl;
    }
    else
    {
        cout << "El numero es 5" << endl;
    }

    if (numero > dato)
    {
        cout << "El numero es mayor que 5" << endl;
    }
    else
    {
        cout << "El numero es menor a 5" << endl;
    }*/

//mayor o igual
    if (numero >= dato)
    {
        cout << "El numero es mayor o igual que 5" << endl;
    }
    else
    {
        cout << "El numero es menor a 5" << endl;
    }
    return 0;
}