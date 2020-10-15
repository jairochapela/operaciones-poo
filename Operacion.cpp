#include <iostream>
#include "Operacion.h"

void Operacion::cargar1() {
    std::cout << "Introduzca valor 1:" << std::endl;
    std::cin >> valor1;
}

void Operacion::cargar2() {
    std::cout << "Introduzca valor 2:" << std::endl;
    std::cin >> valor2;
}

void Operacion::mostrarResultado() {
    std::cout << "Resultado: " << resultado << std::endl;
}
