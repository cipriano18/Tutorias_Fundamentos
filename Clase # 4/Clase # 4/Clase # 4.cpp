
#include <iostream>
#include "Funciones.h"
using namespace std;
int main()
{
    // 1. Mostrar mensaje
    mostrar_mensaje("Cipriano");
    cout << endl;

    // 2. Contar caracteres
    string palabra = "Hola";
    int cantidad = contar_caracteres(palabra);
    cout << "Cantidad de caracteres: " << cantidad << endl;

    // 3. Convertir a mayúsculas
    cout << "Mayuscula: " << mayuscula(palabra) << endl;

    // 4. Sumar dos números
    int resultado = suma(10, 5);
    cout << "Suma: " << resultado << endl;

    // 5. Invertir palabra
    cout << "Palabra invertida: " << invertir_palabra(palabra) << endl;

    // 6. Comprobar si es palíndroma con void
    palindroma("radar");

    // 7. Comprobar si es palíndroma con bool
    if (palindrome("radar"))
    {
        cout << "Es palindroma." << endl;
    }
    else
    {
        cout << "No es palindroma." << endl;
    }

    return 0;
}