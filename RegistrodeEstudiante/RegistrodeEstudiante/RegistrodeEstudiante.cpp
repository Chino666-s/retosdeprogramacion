// RegistrodeEstudiante.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

// Definición de la estructura para el alumno
struct Alumno {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {
    // Creación de la instancia de la estructura
    Alumno alumno1;

    // Entrada de datos
    std::cout << "Ingrese el nombre del alumno: ";
    std::getline(std::cin, alumno1.nombre); // Permite leer nombres con espacios

    std::cout << "Ingrese la edad del alumno: ";
    std::cin >> alumno1.edad;

    std::cout << "Ingrese el promedio del alumno: ";
    std::cin >> alumno1.promedio;

    std::cout << std::endl; // Línea en blanco para separar la salida

    // Mostrar la información en pantalla
    std::cout << "--- Registro de Estudiante ---" << std::endl;
    std::cout << "Nombre: " << alumno1.nombre << std::endl;
    std::cout << "Edad: " << alumno1.edad << " años" << std::endl;
    std::cout << "Promedio: " << alumno1.promedio << std::endl;

    return 0;
}


