#include "Punto.cpp"
#include <iostream>

int main() {
Punto punto1(3, 4);
Punto punto2(6, 8);

std::cout << "Punto 1: ";
punto1.imprimir();

std::cout << "Punto 2: ";
punto2.imprimir();

// Sobrecarga del operador de asignacion (=)
punto1 = punto2;

std::cout << "Punto 1 despues de la asignacion: ";
punto1.imprimir();

return 0;
}