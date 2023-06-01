#include <iostream> //calculadora con funcion de division
using namespace std;
// definir variable
float num1;
float num2;
float resultado;
int option;
float suma;
float resta;
float multi;
float division;

int main()
{
    do
    {
        cout << "Ingrese la option deseada 1-suma, 2-resta, 3-multi, 4-division, 5-salir"<< endl;
        cin >> option;

        switch (option) // menu
        {
        case 1: // suma
            cout << "ingrese el primer numero:" << endl;
            cin >> num1;
            cout << "ingrese el segundo numero:" << endl;
            cin >> num2;
            suma = num1 + num2;
            cout << "el resultado de la suma es:" << suma << endl;
            break;

        case 2: // resta
            cout << "ingrese el primer numero:" << endl;
            cin >> num1;
            cout << "ingrese el segundo numero:" << endl;
            cin >> num2;
            resta = num1 - num2;
            cout << "el resultado de la resta es:" << resta << endl;
            break;

        case 3: // multi
            cout << "ingrese el primer numero:" << endl;
            cin >> num1;
            cout << "ingrese el segundo numero:" << endl;
            cin >> num2;
            multi = num1 * num2;
            cout << "el resultado de la multiplicacion es:" << multi << endl;
            break;

        case 4: // division
            cout << "ingrese el primer numero:" << endl;
            cin >> num1;
            cout << "ingrese el segundo numero:" << endl;
            cin >> num2;
            division = num1 / num2;
            cout << "el resultado de la division es:" << division << endl;
            break;

        case 5: // salir
            cout << "Ha elegido la option de salida" << endl;
            break;
        default:
            cout << "Ha elegido la option incorrecta" << endl;
            break;
        }
    } while (option != 5); // ejecutar

    return 0;
}