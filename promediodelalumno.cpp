#include <iostream>
using namespace std;
float practica, teorica, participacion, nota_final=0;

int main()
{
    cout << "Ingrese la nota de practica:" << endl;
    cin >> practica;
    cout << "Ingrese la nota de teorica:" << endl;
    cin >> teorica;
    cout << "Ingrese la nota de participacion:" << endl;
    cin >> participacion;
    // para no repetir la variante practica, se escribe asi. La estrutura origina practica=practica*0.30
    practica *= 0.30;
    teorica*= 0.60;
    participacion*=0.10;

nota_final=practica+teorica+participacion;
cout<< "El promedio del estudiante es:"<< nota_final<< endl;

    return 0;
}