// HACER UN PROGRAMA QUE INGRESE EL AÑO DE NACIMIENTO Y QUE CALCULE SI ES MAYOR O MENOR DE EDAD, HACER USO DE UN METODO

#include <iostream>
using namespace std;

int cal_edad(int año_nac)
{
    int edad = 0;
    edad = 2023 - año_nac;
    return edad;
}

int main()
{
    cout << "Ingrese su año de nacimiento \n";
    int año = 0;
    cin >> año;

    int edad = cal_edad(año);
    {
        if (edad > 18)
        {
            cout << "Usted es mayor de edad";
        }
        else
        {
            cout << "Usted es menor de edad";
        }
    }
    return edad;
}