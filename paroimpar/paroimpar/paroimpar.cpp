// paroimpar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main() {
    // Declaración de la variable para almacenar el número entero
    int numero;

    // Solicitar el número al usuario
    printf("Introduce un numero entero: ");
    scanf_s("%d", &numero);

    // Condicional if-else combinado con el operador módulo (%)
    if (numero % 2 == 0) {
        printf("El numero %d es PAR.\n", numero);
    }
    else {
        printf("El numero %d es IMPAR.\n", numero);
    }

    return 0;
}

