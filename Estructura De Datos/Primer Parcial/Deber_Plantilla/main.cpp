/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: main.cpp
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripción: Deber uso de TDA
 */
 

#include <iostream>
#include "Fraccion.cpp"
#include "Operacion.cpp"
#include "Proceso.h"


using namespace std;

int main(){
	Fraccion<float> fraccion1(2.5,3.1);
	Fraccion<float> fraccion2(7.1,1.3);
	
	std::cout<<"Fraccion 1: "<<std::endl;
	fraccion1.imprimir(fraccion1);
	std::cout<<" "<<endl;
	std::cout<<"Fraccion 2: "<<std::endl;
	fraccion2.imprimir(fraccion2);
	std::cout<<" "<<endl; 
	Operacion obj1;
	Fraccion<float> resultado = obj1.calculo(fraccion1,fraccion2);
	std::cout<<"Resultado: "<<std::endl;
	resultado.imprimir(resultado);
	float nume = resultado.getNumerador();
	float deno = resultado.getDenominador();
	std::cout<<" "<<std::endl;
	std::cout<<"Resultado en decimal: "<<obj1.calculo(nume,deno)<<endl;
	
	
	return 0;
}