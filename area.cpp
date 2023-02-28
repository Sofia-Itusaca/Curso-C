// CALCULAR EL AREA DE UN RECTANGULO

#include <iostream>
using namespace std;

int main()
{
    cout << "Calculemos el area de un rectangulo \n";
    cout << "Ingrese su lado:\n";
    int lado;
    cin >> lado;

    cout << "Ingrese su base:\n";
    int base;
    cin >> base;

    int area;
    area = lado * base;

    cout << "El area del triangulo es: ";
    cout << area;

    return 0;
}