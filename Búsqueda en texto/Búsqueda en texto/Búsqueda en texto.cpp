// ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
// CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
// MATERIA--PROGRAMACION ESTRUCTURADA
// NOMBRE--FRANK GUERRERO CHAVEZ

#include <stdio.h>

int main() {
    char frase[100];
    char caracter;
    int encontrado = 0;

    // Capturar la frase incluyendo espacios usando fgets
    printf("Introduce una frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Capturar el carácter a buscar
    printf("Introduce el caracter que deseas buscar: ");
    scanf_s("%c", &caracter);

    // Recorrer la frase para buscar el carácter
    for (int i = 0; frase[i] != '\0' && frase[i] != '\n'; i++) {
        if (frase[i] == caracter) {
            printf("El caracter '%c' fue hallado en la posicion: %d\n", caracter, i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("El caracter '%c' no fue hallado en la frase.\n", caracter);
    }

    return 0;
}