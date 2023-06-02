#include <iostream> //ingreso de datos de una persona
using namespace std;

int edad;
string genero;
float estatura;

int main(){

cout<< "Ingrese su edad"<< endl;
cin>> edad;
cout<< "Ingrese su genero"<< endl;
cin>> genero;
cout<< "Ingrese su estatura en cm"<< endl;
cin>> estatura;

cout<< "Su edad es:"<< edad<< endl;
cout<< "Su genero es:"<< genero<< endl;
cout<< "Su altura es:"<< estatura<< endl;

return 0;
}