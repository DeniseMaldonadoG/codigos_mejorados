#include <iostream>
using namespace std;
//definir variables
int main() {
    int salario;
    int year_trabajados;
    float num1;
    cout << "Ingresa year trabajados"<< endl; //esto es en year_trabajados
    cin >> year_trabajados;
    year_trabajados=2023-year_trabajados;

// calcular el bono 
  if (year_trabajados>=20) {
    cout << "Ingresar tu salario: ";
    cin >> salario;
    num1=salario*0.30;
    salario=num1+salario;
    cout << "Tu bono es de: "<< salario; 
    }else {
    cout << "Ingresar tu salario: ";
    cin >> salario;
    num1=salario*0.15;
    salario=num1+salario;
        cout << "Tu bono es de "<< salario;
    }
  
return 0;
}