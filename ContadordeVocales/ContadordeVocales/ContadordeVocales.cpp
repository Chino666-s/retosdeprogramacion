// ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
// CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
// MATERIA--PROGRAMACION ESTRUCTURADA
// NOMBRE--FRANK GUERRERO CHAVEZ
// ContadordeVocales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main() {
    // Definición de un arreglo de caracteres para la palabra
    char palabra[50];
    int i = 0;
    int contadorVocales = 0;

    printf("Introduce una palabra (sin espacios): ");
    // %49s limita la entrada para evitar desbordar el arreglo de caracteres
    scanf_s("%49s", palabra);

    // El bucle corre hasta encontrar el carácter nulo '\0' que marca el fin del string
    while (palabra[i] != '\0') {
        // Evaluamos el carácter actual
        switch (palabra[i]) {
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            contadorVocales++;
            break;
        default:
            // Si no es una vocal, no hace nada
            break;
        }
        i++; // Avanzar al siguiente carácter
    }

    printf("\nLa palabra \"%s\" contiene %d vocales.\n", palabra, contadorVocales);

    return 0;
}

