// hacer un programa que calcule el promedio de 3 notas y calcular si esta aprobado o no, considerando que 10.5 es aprobado.

#include <iostream>
using namespace std;

int main()
{

    double prom;

    cout << "Ingrese su primera nota \n";
    double nota1;
    cin >> nota1;

    cout << "Ingrese su segunda nota\n";
    double nota2;
    cin >> nota2;

    cout << "Ingrese su tercera nota\n";
    double nota3;
    cin >> nota3;

    prom = (nota1 + nota2 + nota3) / 3;

    if (prom > 10.5)
    {
        cout << "Usted esta aprobado con un promedio de: ";
        cout << prom;
    }
    else
    {
        cout << "Usted esta desaprobado con un promedio de: ";
        cout << prom;
    }

    return 0;
}
