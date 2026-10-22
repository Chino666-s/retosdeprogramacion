// mayordetresnumeros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main() {
    int num1, num2, num3, mayor;

    // Solicitar los tres números al usuario
    printf("Introduce el primer numero entero: ");
    scanf_s("%d", &num1);

    printf("Introduce el segundo numero entero: ");
    scanf_s("%d", &num2);

    printf("Introduce el tercer numero entero: ");
    scanf_s("%d", &num3);

    // Determinar el mayor usando el operador lógico AND (&&)
    if (num1 >= num2 && num1 >= num3) {
        mayor = num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        mayor = num2;
    }
    else {
        mayor = num3;
    }

    // Mostrar el resultado en pantalla
    printf_s("\nEl numero mayor es: %d\n", mayor);

    return 0;
}
