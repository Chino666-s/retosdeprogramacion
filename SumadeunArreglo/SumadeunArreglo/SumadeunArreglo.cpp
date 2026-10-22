// ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
// CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
// MATERIA--PROGRAMACION ESTRUCTURADA
// NOMBRE--FRANK GUERRERO CHAVEZ
// SumadeunArreglo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main() {
    // Declaración del arreglo de tamaño 5 y variables de control
    int numeros[5];
    int i;
    int suma = 0; // Inicializador del acumulador de suma

    printf("--- Ingreso de Datos al Arreglo ---\n");
    // Bucle para solicitar y almacenar los 5 números
    for (i = 0; i < 5; i++) {
        printf("Introduce el numero para la posicion [%d]: ", i);
        scanf_s("%d", &numeros[i]);
    }

    // Bucle para sumar todos los elementos del arreglo
    for (i = 0; i < 5; i++) {
        suma += numeros[i];
    }

    // Mostrar el resultado de la suma
    printf("\nLa suma de todos los elementos es: %d\n", suma);

    return 0;
}

