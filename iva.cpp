#include <iostream>
using namespace std;

float num;
float total;
float iva;

int main()
{
    cout << "ingrese el precio del producto" << endl;
    cin >> num;

    iva = num * 0.13;
    total = num + iva;
    cout << "el total a pagar con iva incluido es:" << total<< endl;

    return 0;
}