#include <iostream>
#include <vector>
#include <string>
#include "DyV.h" // Asegúrate de que DyV.h esté en el mismo directorio

void probarConEnteros() {
    std::vector<int> enteros = {1, 3, 5, 7, 9, 11};
    int buscar = 7;
    int resultado = busquedaBinaria(buscar, enteros, 0, enteros.size() - 1);

    if (resultado != -1)
        std::cout << "Entero encontrado en la posición: " << resultado << std::endl;
    else
        std::cout << "Entero no encontrado" << std::endl;
}

void probarConFlotantes() {
    std::vector<float> flotantes = {1.1, 2.2, 3.3, 4.4, 5.5};
    float buscar = 3.3;
    int resultado = busquedaBinaria(buscar, flotantes, 0, flotantes.size() - 1);

    if (resultado != -1)
        std::cout << "Flotante encontrado en la posición: " << resultado << std::endl;
    else
        std::cout << "Flotante no encontrado" << std::endl;
}

void probarConCadenas() {
    std::vector<std::string> cadenas = {"apple", "banana", "cherry", "date", "fig"};
    std::string buscar = "cherry";
    int resultado = busquedaBinaria(buscar, cadenas, 0, cadenas.size() - 1);

    if (resultado != -1)
        std::cout << "Cadena encontrada en la posición: " << resultado << std::endl;
    else
        std::cout << "Cadena no encontrada" << std::endl;
}

int main() {
    std::cout << "=== Pruebas con Enteros ===" << std::endl;
    probarConEnteros();

    std::cout << "\n=== Pruebas con Flotantes ===" << std::endl;
    probarConFlotantes();

    std::cout << "\n=== Pruebas con Cadenas ===" << std::endl;
    probarConCadenas();

    return 0;
}
