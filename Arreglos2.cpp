// Declarar un arreglo de 5 productos-
// Remplazar el prodeucto de la posicion 3 por computadora
// imprimir el arreglo

#include <iostream>
using namespace std;

int main()
{

    string b[] = {"maria", "juan", "Luis", "Jhony", "dennys"};
    cout << "-" << b[3];
    b[3] = "\n-Computadora";
    cout << b[3];

    for (int i = 0; i < 5; i++)
    {
        cout << "\n"
             << "El valor del arreglo b es[" << i << "]";
    }
    return 0;
}