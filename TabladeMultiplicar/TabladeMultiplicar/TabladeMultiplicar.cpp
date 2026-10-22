// ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
// CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
// MATERIA--PROGRAMACION ESTRUCTURADA
// NOMBRE--FRANK GUERRERO CHAVEZ
// TabladeMultiplicar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main() {
    // Declaración de variables para el número base y el iterador
    int numero, i;

    // Solicitar el número al usuario
    printf("Introduce un numero para ver su tabla: ");
    scanf_s("%d", &numero);

    printf("\n--- Tabla de multiplicar del %d ---\n", numero);

    // Bucle for para iterar del 1 al 10
    for (i = 1; i <= 10; i++) {
        // Formato de texto para mostrar la operación ordenada
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

