#include <iostream>
#include <conio.h>
using namespace std;

// prototipo de funcion
int encontrarMax(int x, int y);

int main()
{
    int num1, num2;

    cout << "Ingrese dos numeros" << endl;
    cin >> num1, num2;
    cout << "El mayor de los 2  numeros es:" << encontrarMax(num1, num2) << endl;
    getch();
    return 0;
}

// Definicion de funcion
int encontrarMax(int x, int y)
{
    int numMax;

    if (x>y)
    {
        numMax = x;
    } 
    else
    {
        numMax = y;
    }

    return numMax;
}