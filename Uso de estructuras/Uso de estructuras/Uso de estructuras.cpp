// ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
// CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
// MATERIA--PROGRAMACION ESTRUCTURADA
// NOMBRE--FRANK GUERRERO CHAVEZ

#include <stdio.h>
#include <string.h>

// Definición de la estructura
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    // Declaración de una estructura como variable simple
    struct Estudiante est1;

    // Lectura de los datos ingresados por el usuario
    printf("--- Captura de Datos del Estudiante ---\n");

    printf("Introduce el nombre completo: ");
    fgets(est1.nombre, sizeof(est1.nombre), stdin);

    // Eliminar el salto de línea al final de la cadena si existe
    est1.nombre[strcspn(est1.nombre, "\n")] = '\0';

    printf("Introduce la edad: ");
    scanf_s("%d", &est1.edad);

    printf("Introduce el promedio: ");
    scanf_s("%f", &est1.promedio);

    // Mostrar los resultados en pantalla
    printf("\n--- Datos Registrados ---\n");
    printf("Nombre: %s\n", est1.nombre);
    printf("Edad: %d anios\n", est1.edad);
    printf("Promedio: %.2f\n", est1.promedio);

    return 0;
}