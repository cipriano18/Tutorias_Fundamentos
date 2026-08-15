#include <iostream>
using namespace std;

int main()
{
    // =====================================================
    // EJERCICIO 1
    // =====================================================

    // Variable donde almacenamos el saldo de la cuenta.
    double saldo;

    // Solicitamos al usuario el saldo de la cuenta.
    cout << "Ingrese el saldo de la cuenta: ";
    cin >> saldo;

    // Comprobamos si el saldo es mayor que cero.
    if (saldo > 0)
    {
        // Si es mayor que cero, el saldo es positivo.
        cout << "Saldo positivo." << endl;
    }
    // Si no es positivo, comprobamos si es igual a cero.
    else if (saldo == 0)
    {
        // Si es igual a cero, mostramos el mensaje.
        cout << "Saldo en cero." << endl;
    }
    // Si no es mayor ni igual a cero, es negativo.
    else
    {
        // Mostramos que el saldo es negativo.
        cout << "Saldo negativo." << endl;
    }


    // =====================================================
    // EJERCICIO 2
    // =====================================================

    // Variables para almacenar los tres números.
    int numero1, numero2, numero3;

    // Solicitamos los tres números al usuario.
    cout << "\nIngrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    // Variable para almacenar el número mayor.
    int mayor;

    // Comparamos los tres números para encontrar el mayor.
    if (numero1 >= numero2 && numero1 >= numero3)
    {
        mayor = numero1;
    }
    else if (numero2 >= numero1 && numero2 >= numero3)
    {
        mayor = numero2;
    }
    else
    {
        mayor = numero3;
    }

    // Mostramos el número mayor.
    cout << "El numero mayor es: " << mayor << endl;

    // Variable para almacenar el número menor.
    int menor;

    // Comparamos los tres números para encontrar el menor.
    if (numero1 <= numero2 && numero1 <= numero3)
    {
        menor = numero1;
    }
    else if (numero2 <= numero1 && numero2 <= numero3)
    {
        menor = numero2;
    }
    else
    {
        menor = numero3;
    }

    // Mostramos el número menor.
    cout << "El numero menor es: " << menor << endl;

    // Comprobamos si existen números repetidos.
    if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3)
    {
        cout << "Existen numeros repetidos." << endl;
    }
    else
    {
        cout << "No existen numeros repetidos." << endl;
    }


    // =====================================================
    // EJERCICIO 3
    // =====================================================

    // Variables para almacenar las horas y el pago por hora.
    double horas, pagoHora, salario;

    // Solicitamos las horas trabajadas y el pago por hora.
    cout << "\nIngrese la cantidad de horas trabajadas: ";
    cin >> horas;

    cout << "Ingrese el pago por hora: ";
    cin >> pagoHora;

    // Comprobamos si el empleado excede las 60 horas.
    if (horas > 60)
    {
        // Mostramos que se excedió el límite permitido.
        cout << "Excede el limite permitido de 60 horas." << endl;

        // Calculamos el salario considerando hasta 60 horas.
        salario = (40 * pagoHora) + (20 * pagoHora * 2);
    }
    // Si trabaja más de 40 horas, existen horas extra.
    else if (horas > 40)
    {
        // Calculamos las horas normales más las horas extra
        // pagadas al doble.
        salario = (40 * pagoHora) + ((horas - 40) * pagoHora * 2);
    }
    // Si trabaja 40 horas o menos, todas son normales.
    else
    {
        // Calculamos el salario normal.
        salario = horas * pagoHora;
    }

    // Mostramos el salario total.
    cout << "Salario total: " << salario << endl;


    // =====================================================
    // EJERCICIO 4
    // =====================================================

    // Solicitamos nuevamente tres números enteros.
    int n1, n2, n3;

    cout << "\nIngrese el primer numero: ";
    cin >> n1;

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    // Comprobamos cuál de los tres números es el mayor.
    if (n1 >= n2 && n1 >= n3)
    {
        cout << "El numero mayor es: " << n1 << endl;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        cout << "El numero mayor es: " << n2 << endl;
    }
    else
    {
        cout << "El numero mayor es: " << n3 << endl;
    }


    // =====================================================
    // EJERCICIO 5
    // =====================================================

    // Variable para almacenar el carácter.
    char caracter;

    // Solicitamos un carácter al usuario.
    cout << "\nIngrese un caracter: ";
    cin >> caracter;

    // Comprobamos si el carácter corresponde a una vocal.
    if (caracter == 'a' || caracter == 'e' ||
        caracter == 'i' || caracter == 'o' ||
        caracter == 'u')
    {
        // Si coincide con alguna vocal, mostramos el mensaje.
        cout << "Es una vocal." << endl;
    }
    else
    {
        // Si no coincide, no es una vocal.
        cout << "No es una vocal." << endl;
    }


    // =====================================================
    // EJERCICIO 6
    // =====================================================

    // Variable para almacenar el número.
    int numero;

    // Solicitamos un número entero.
    cout << "\nIngrese un numero entero: ";
    cin >> numero;

    // Comprobamos si el número es positivo.
    if (numero > 0)
    {
        cout << "El numero es positivo." << endl;
    }
    // Comprobamos si el número es negativo.
    else if (numero < 0)
    {
        cout << "El numero es negativo." << endl;
    }
    // Si no es positivo ni negativo, es cero.
    else
    {
        cout << "El numero es igual a cero." << endl;
    }


    // =====================================================
    // EJERCICIO 7
    // =====================================================

    // Solicitamos un número entero.
    cout << "\nIngrese un numero entero: ";
    cin >> numero;

    // El operador % obtiene el residuo de una división.
    // Si el residuo es cero, el número es múltiplo.
    if (numero % 3 == 0 && numero % 5 == 0)
    {
        // Debe ser múltiplo de 3 y de 5 al mismo tiempo.
        cout << "El numero es multiplo de 3 y de 5." << endl;
    }
    else
    {
        cout << "El numero no es multiplo de 3 y de 5." << endl;
    }


    // =====================================================
    // EJERCICIO 8
    // =====================================================

    // Solicitamos un número entero.
    cout << "\nIngrese un numero entero: ";
    cin >> numero;

    // Un número par tiene residuo cero al dividirlo entre 2.
    if (numero % 2 == 0)
    {
        cout << "El numero es par." << endl;
    }
    else
    {
        // Si el residuo no es cero, el número es impar.
        cout << "El numero es impar." << endl;
    }


    // =====================================================
    // EJERCICIO 9
    // =====================================================

    // Variable para almacenar el número del día.
    int dia;

    // Solicitamos un número entre 1 y 7.
    cout << "\nIngrese un numero del 1 al 7: ";
    cin >> dia;

    // Comparamos el número con cada día de la semana.
    if (dia == 1)
    {
        cout << "Lunes" << endl;
    }
    else if (dia == 2)
    {
        cout << "Martes" << endl;
    }
    else if (dia == 3)
    {
        cout << "Miercoles" << endl;
    }
    else if (dia == 4)
    {
        cout << "Jueves" << endl;
    }
    else if (dia == 5)
    {
        cout << "Viernes" << endl;
    }
    else if (dia == 6)
    {
        cout << "Sabado" << endl;
    }
    else if (dia == 7)
    {
        cout << "Domingo" << endl;
    }
    else
    {
        // Si no está entre 1 y 7, el día no es válido.
        cout << "Dia invalido." << endl;
    }


    // =====================================================
    // EJERCICIO 10
    // =====================================================

    // Variable para almacenar el número del mes.
    int mes;

    // Solicitamos un número entre 1 y 12.
    cout << "\nIngrese un numero del 1 al 12: ";
    cin >> mes;

    // Comparamos el número con cada mes.
    if (mes == 1)
    {
        cout << "Enero" << endl;
    }
    else if (mes == 2)
    {
        cout << "Febrero" << endl;
    }
    else if (mes == 3)
    {
        cout << "Marzo" << endl;
    }
    else if (mes == 4)
    {
        cout << "Abril" << endl;
    }
    else if (mes == 5)
    {
        cout << "Mayo" << endl;
    }
    else if (mes == 6)
    {
        cout << "Junio" << endl;
    }
    else if (mes == 7)
    {
        cout << "Julio" << endl;
    }
    else if (mes == 8)
    {
        cout << "Agosto" << endl;
    }
    else if (mes == 9)
    {
        cout << "Septiembre" << endl;
    }
    else if (mes == 10)
    {
        cout << "Octubre" << endl;
    }
    else if (mes == 11)
    {
        cout << "Noviembre" << endl;
    }
    else if (mes == 12)
    {
        cout << "Diciembre" << endl;
    }
    else
    {
        // Si no está entre 1 y 12, el mes no es válido.
        cout << "Mes invalido." << endl;
    }


    // =====================================================
    // EJERCICIO 11
    // =====================================================

    // Variables para almacenar el salario original y final.
    double salarioOriginal, salarioFinal;

    // Solicitamos el salario.
    cout << "\nIngrese el salario del empleado: ";
    cin >> salarioOriginal;

    // Comprobamos el rango del salario para determinar
    // el porcentaje de aumento.
    if (salarioOriginal < 500000)
    {
        // Aumentamos el salario en un 10 %.
        salarioFinal = salarioOriginal * 1.10;
    }
    else if (salarioOriginal <= 1000000)
    {
        // Aumentamos el salario en un 7 %.
        salarioFinal = salarioOriginal * 1.07;
    }
    else
    {
        // Aumentamos el salario en un 5 %.
        salarioFinal = salarioOriginal * 1.05;
    }

    // Mostramos el salario original.
    cout << "Salario original: " << salarioOriginal << endl;

    // Mostramos el salario después del aumento.
    cout << "Salario final: " << salarioFinal << endl;


    // =====================================================
    // EJERCICIO 12
    // =====================================================

    // Variables para almacenar peso, estatura e IMC.
    double peso, estatura, imc;

    // Solicitamos el peso y la estatura.
    cout << "\nIngrese el peso en kg: ";
    cin >> peso;

    cout << "Ingrese la estatura en metros: ";
    cin >> estatura;

    // Calculamos el IMC utilizando la fórmula:
    // IMC = peso / (estatura * estatura)
    imc = peso / (estatura * estatura);

    // Mostramos el resultado del IMC.
    cout << "IMC: " << imc << endl;

    // Determinamos la categoría correspondiente.
    if (imc < 18.5)
    {
        cout << "Categoria: Bajo peso." << endl;
    }
    else if (imc < 25.0)
    {
        cout << "Categoria: Peso normal." << endl;
    }
    else if (imc < 30.0)
    {
        cout << "Categoria: Sobrepeso." << endl;
    }
    else
    {
        cout << "Categoria: Obesidad." << endl;
    }


    // =====================================================
    // EJERCICIO 13
    // =====================================================

    // Variables para almacenar los tres lados del triángulo.
    double lado1, lado2, lado3;

    // Solicitamos los tres lados.
    cout << "\nIngrese el primer lado: ";
    cin >> lado1;

    cout << "Ingrese el segundo lado: ";
    cin >> lado2;

    cout << "Ingrese el tercer lado: ";
    cin >> lado3;

    // Para formar un triángulo debe cumplirse que la suma
    // de dos lados sea mayor que el tercer lado.
    if (lado1 + lado2 > lado3 &&
        lado1 + lado3 > lado2 &&
        lado2 + lado3 > lado1)
    {
        // Primero comprobamos si los tres lados son iguales.
        if (lado1 == lado2 && lado2 == lado3)
        {
            cout << "El triangulo es equilatero." << endl;
        }
        // Si no son los tres iguales, comprobamos si dos
        // lados son iguales.
        else if (lado1 == lado2 ||
            lado1 == lado3 ||
            lado2 == lado3)
        {
            cout << "El triangulo es isosceles." << endl;
        }
        // Si no hay lados iguales, todos son diferentes.
        else
        {
            cout << "El triangulo es escaleno." << endl;
        }
    }
    else
    {
        // Si no cumple las condiciones, no puede formar
        // un triángulo.
        cout << "Los valores no forman un triangulo." << endl;
    }


    // =====================================================
    // EJERCICIO 14
    // =====================================================

    // Variable para almacenar el año de nacimiento.
    int anioNacimiento;

    // Año actual utilizado para calcular la edad.
    int anioActual = 2026;

    // Variable donde almacenamos la edad.
    int edad;

    // Solicitamos el año de nacimiento.
    cout << "\nIngrese su anio de nacimiento: ";
    cin >> anioNacimiento;

    // Comprobamos que el año ingresado sea válido.
    if (anioNacimiento <= 0 || anioNacimiento > anioActual)
    {
        // El año no puede ser cero, negativo ni posterior
        // al año actual.
        cout << "Anio de nacimiento invalido." << endl;
    }
    else
    {
        // Calculamos la edad restando el año de nacimiento
        // al año actual.
        edad = anioActual - anioNacimiento;

        // Mostramos la edad calculada.
        cout << "Edad: " << edad << " anios." << endl;

        // Determinamos la etapa de vida según la edad.
        if (edad < 12)
        {
            cout << "Etapa: Nino." << endl;
        }
        else if (edad <= 17)
        {
            cout << "Etapa: Adolescente." << endl;
        }
        else if (edad <= 59)
        {
            cout << "Etapa: Adulto." << endl;
        }
        else
        {
            cout << "Etapa: Adulto mayor." << endl;
        }
    }


    // =====================================================
    // EJERCICIO 15
    // =====================================================

    // Variables para almacenar las tres notas.
    double nota1, nota2, nota3;

    // Variable para almacenar el promedio.
    double promedio;

    // Solicitamos las tres notas.
    cout << "\nIngrese la primera nota: ";
    cin >> nota1;

    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    // Primero verificamos que todas las notas estén
    // dentro del rango permitido de 0 a 100.
    if (nota1 < 0 || nota1 > 100 ||
        nota2 < 0 || nota2 > 100 ||
        nota3 < 0 || nota3 > 100)
    {
        // Si alguna nota está fuera del rango, mostramos
        // un mensaje de error.
        cout << "Una o mas notas son invalidas." << endl;
    }
    else
    {
        // Calculamos el promedio de las tres notas.
        promedio = (nota1 + nota2 + nota3) / 3;

        // Mostramos el promedio.
        cout << "Promedio final: " << promedio << endl;

        // Determinamos la condición del estudiante.
        if (promedio >= 90)
        {
            cout << "Condicion: Excelente." << endl;
        }
        else if (promedio >= 70)
        {
            cout << "Condicion: Aprobado." << endl;
        }
        else if (promedio >= 60)
        {
            cout << "Condicion: Recuperacion." << endl;
        }
        else
        {
            cout << "Condicion: Reprobado." << endl;
        }
    }


    // =====================================================
    // EJERCICIO 16
    // =====================================================

    // Variable para almacenar el tipo de cliente.
    int tipoCliente;

    // Variables para el monto y los descuentos.
    double montoCompra;
    double porcentajeDescuento;
    double montoDescuento;
    double montoFinal;

    // Solicitamos el tipo de cliente.
    cout << "\nIngrese el tipo de cliente:" << endl;
    cout << "1. Cliente frecuente" << endl;
    cout << "2. Cliente normal" << endl;
    cout << "3. Cliente nuevo" << endl;
    cout << "Seleccione una opcion: ";
    cin >> tipoCliente;

    // Solicitamos el monto de la compra.
    cout << "Ingrese el monto de la compra: ";
    cin >> montoCompra;

    // Determinamos el descuento según el tipo de cliente.
    if (tipoCliente == 1)
    {
        // El cliente frecuente recibe un 15 %.
        porcentajeDescuento = 15;
    }
    else if (tipoCliente == 2)
    {
        // El cliente normal recibe un 5 %.
        porcentajeDescuento = 5;
    }
    else if (tipoCliente == 3)
    {
        // El cliente nuevo recibe un 10 %.
        porcentajeDescuento = 10;
    }
    else
    {
        // Si no es 1, 2 ni 3, el tipo de cliente es inválido.
        cout << "Tipo de cliente invalido." << endl;

        // Colocamos el porcentaje en cero para evitar
        // realizar un cálculo incorrecto.
        porcentajeDescuento = 0;
    }

    // Si el tipo de cliente es válido, continuamos calculando.
    if (tipoCliente >= 1 && tipoCliente <= 3)
    {
        // Si la compra supera los 500000, agregamos un 5 %
        // adicional al descuento.
        if (montoCompra > 500000)
        {
            porcentajeDescuento = porcentajeDescuento + 5;
        }

        // Calculamos cuánto dinero representa el descuento.
        montoDescuento = montoCompra * porcentajeDescuento / 100;

        // Restamos el descuento al monto original.
        montoFinal = montoCompra - montoDescuento;

        // Mostramos el monto original.
        cout << "Monto original: " << montoCompra << endl;

        // Mostramos el porcentaje total de descuento.
        cout << "Porcentaje de descuento aplicado: "
            << porcentajeDescuento << "%" << endl;

        // Mostramos el monto final.
        cout << "Monto final a pagar: " << montoFinal << endl;
    }


    // =====================================================
    // EJERCICIO 17
    // =====================================================

    // Variables para almacenar el saldo y el monto del retiro.
    double saldoDisponible;
    int retiro;

    // Solicitamos el saldo disponible.
    cout << "\nIngrese el saldo disponible: ";
    cin >> saldoDisponible;

    // Solicitamos el monto que desea retirar.
    cout << "Ingrese el monto que desea retirar: ";
    cin >> retiro;

    // Primero comprobamos que el retiro sea mayor que cero.
    if (retiro <= 0)
    {
        cout << "Error: el monto debe ser mayor que cero." << endl;
    }
    // Comprobamos que el retiro no supere el saldo.
    else if (retiro > saldoDisponible)
    {
        cout << "Error: el retiro supera el saldo disponible." << endl;
    }
    // Comprobamos que el retiro sea múltiplo de 500.
    else if (retiro % 500 != 0)
    {
        cout << "Error: el monto debe ser multiplo de 500." << endl;
    }
    else
    {
        // Si todas las condiciones son correctas, realizamos
        // el retiro restándolo del saldo disponible.
        saldoDisponible = saldoDisponible - retiro;

        // Informamos que la operación fue exitosa.
        cout << "Retiro realizado correctamente." << endl;

        // Mostramos el saldo restante.
        cout << "Saldo restante: " << saldoDisponible << endl;
    }

    return 0;
}