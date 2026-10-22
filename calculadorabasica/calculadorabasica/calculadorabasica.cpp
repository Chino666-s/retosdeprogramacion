// ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
// CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
// MATERIA--PROGRAMACION ESTRUCTURADA
// NOMBRE--FRANK GUERRERO CHAVEZ
// calculadorabasica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main() {
    // Declaración de variables para almacenar los dos números
    float num1, num2;
    // Variables para almacenar los resultados de las operaciones
    float suma, resta, multiplicacion, division;

    // Solicitar los dos números al usuario
    printf("Introduce el primer numero: ");
    scanf_s("%f", &num1);

    printf("Introduce el segundo numero: ");
    scanf_s("%f", &num2);

    // Realizar las operaciones aritméticas básicas
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    // Mostrar los resultados en pantalla
    printf("\n--- Resultados de la Calculadora ---\n");
    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicacion: %.2f\n", multiplicacion);

    // Control de seguridad para evitar la división por cero
    if (num2 != 0) {
        division = num1 / num2;
        printf("Division: %.2f\n", division);
    }
    else {
        printf("Division: No es posible dividir entre cero.\n");
    }

    return 0;
}
