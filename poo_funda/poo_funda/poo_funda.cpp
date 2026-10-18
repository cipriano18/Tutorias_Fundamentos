#include <iostream>
#include "Estudiantes.h"
#include "Persona.h"
using namespace std;
int main()
{
   /* Estudiantes estudiante1("Sebas", 18);
    Estudiantes estudiante2;
    estudiante2.setNombre("antoni");
    estudiante2.setEdad(18);
    estudiante1.setNombre("cipriano");
    cout << estudiante1.tostring();
    cout << estudiante1.esMayoredad();*/
    Persona persona1;
    Persona persona2;
    persona1.perdirDator();
    persona2.perdirDator();
    cout<<persona1.tostring(); 
    cout << persona2.tostring();

}