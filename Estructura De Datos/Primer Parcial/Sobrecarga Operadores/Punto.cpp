#include "Punto.h"
#include <iostream>
void Punto::imprimir(){
	std::cout << "(" << x << ", " << y << ")" << std::endl;
}

void Punto::operator=(const Punto& p2){
	x = p2.x;
	y = p2.y;
}