#include <iostream>
#include "Fraccion.cpp"
#include "Proceso.h"

using namespace std;

int main(){
	Fraccion fraccion1(2,3);
	Fraccion fraccion2(4,6);
	
	std::cout<<"Fraccion 1: "<<std::endl;
	fraccion1.imprimir(fraccion1);
	std::cout<<" "<<endl;
	std::cout<<"Fraccion 2: "<<std::endl;
	fraccion2.imprimir(fraccion2);
	std::cout<<" "<<endl;
	Fraccion resultado = fraccion1.calculo(fraccion1,fraccion2);
	std::cout<<"Resultado: "<<std::endl;
	resultado.imprimir(resultado);
	float nume = resultado.getNumerador();
	float deno = resultado.getDenominador();
	std::cout<<" "<<std::endl;
	std::cout<<"Resultado en decimal: "<<resultado.calculo(nume,deno)<<endl;
	return 0;
}