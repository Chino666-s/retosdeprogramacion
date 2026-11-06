// ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCINGO
// CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
// MATERIA--PROGRAMACION ESTRUCTURADA
// NOMBRE--FRANK GUERRERO CHAVEZ

#include <stdio.h>

int main() {
    // 1. Manejo de apuntadores con variables simples
    int numero = 42;
    int* ptr_numero = &numero;

    printf("--- Variable Simple ---\n");
    printf("Valor de la variable: %d\n", numero);
    printf("Direccion de memoria de la variable: %p\n", (void*)&numero);
    printf("Valor usando el apuntador: %d\n", *ptr_numero);
    printf("Direccion almacenada en el apuntador: %p\n", (void*)ptr_numero);

    // Modificando el valor a través del apuntador
    *ptr_numero = 100;
    printf("Nuevo valor de la variable despues de modificar el apuntador: %d\n\n", numero);

    // 2. Manejo de apuntadores con arreglos
    int arreglo[] = { 10, 20, 30, 40, 50 };
    int* ptr_arreglo = arreglo; // El nombre del arreglo decae en un apuntador al primer elemento

    printf("--- Arreglos y Apuntadores ---\n");
    for (int i = 0; i < 5; i++) {
        // Formas equivalentes de acceder a los elementos:
        // Usando notación de apuntadores: *(ptr_arreglo + i) o notación de índices: ptr_arreglo[i]
        printf("Elemento %d (usando aritmetica de apuntadores): %d\n", i, *(ptr_arreglo + i));
    }

    return 0;
}