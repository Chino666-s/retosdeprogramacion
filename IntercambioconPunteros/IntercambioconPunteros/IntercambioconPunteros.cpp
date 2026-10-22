// IntercambioconPunteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

// Prototipo de la función que recibe dos punteros enteros
void intercambiar(int* a, int* b) {
    int temporal;

    // Proceso de intercambio usando una variable auxiliar
    temporal = *a; // Guarda el valor apuntado por a en temporal
    *a = *b;       // Asigna el valor apuntado por b a la dirección de a
    *b = temporal; // Asigna el valor de temporal a la dirección de b
}

int main() {
    int x, y;

    printf("Introduce el valor de X: ");
    scanf_s("%d", &x);
    printf("Introduce el valor de Y: ");
    scanf_s("%d", &y);

    printf("\nValores originales: X = %d, Y = %d\n", x, y);

    // Se envían las direcciones de memoria usando el operador de dirección (&)
    intercambiar(&x, &y);

    printf("Valores intercambiados: X = %d, Y = %d\n", x, y);

    return 0;
}

