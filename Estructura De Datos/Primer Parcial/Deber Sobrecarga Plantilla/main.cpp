/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Fecha de creacion: 17/05/2023 
 * Fecha de modificacion: 18/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripcion: Sobrecarga de Operadores
 */

#include "Operador.cpp"
#include <iostream>


int main(){
	Operador<int> o1(8);
	Operador<int> o2(7);
	
	int resultado=o1%o2;
	
	std::cout<<"El mod de "<<o1.getNum1()<<" y "<<o2.getNum1()<<" es: "<<resultado<<std::endl;
	
	system("pause");
	return 0;
}
