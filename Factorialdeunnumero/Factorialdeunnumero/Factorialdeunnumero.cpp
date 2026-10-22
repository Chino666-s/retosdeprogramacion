// ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
// CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
// MATERIA--PROGRAMACION ESTRUCTURADA
// NOMBRE--FRANK GUERRERO CHAVEZ
// Factorialdeunnumero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main() {
    int numero, i;
    // Se usa unsigned long long para evitar el desbordamiento de tipo en números grandes
    unsigned long long factorial = 1;

    // Solicitar el número al usuario
    printf("Introduce un numero entero positivo: ");
    scanf_s("%d", &numero);

    // Validación para asegurar que el número sea positivo
    if (numero < 0) {
        printf("Error: El factorial no esta definido para numeros negativos.\n");
    }
    else {
        // Bucle para multiplicar de forma acumulativa
        for (i = 1; i <= numero; i++) {
            factorial *= i; // Equivalente a: factorial = factorial * i;
        }

        // %llu es el especificador de formato para unsigned long long
        printf("El factorial de %d es: %llu\n", numero, factorial);
    }

    return 0;
}

