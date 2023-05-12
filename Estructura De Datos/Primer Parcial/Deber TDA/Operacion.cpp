/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Operacion.cpp
 * Fecha de creaciÃ³n: 10/05/2023 
 * Fecha de modificaciÃ³n: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * DescripciÃ³n: Implementacion clase Operacion
 */
 
#include "Operacion.h"
#include <iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Operacion()
// Purpose:    Constructor por defecto de la clase Operacion
// Return:     none
////////////////////////////////////////////////////////////////////////
Operacion::Operacion()
{
	
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Operacion(float nu1)
// Purpose:    Constructor de la clase Operacion que inicializa el atributo num1 con un valor
// Parameters:
// - nu1: valor que se asigna al atributo num1
// Return:     none
////////////////////////////////////////////////////////////////////////
Operacion::Operacion(float nu1)
{
	this->num1=nu1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::~Operacion()
// Purpose:    Destructor de la clase Operacion
// Return:     none
////////////////////////////////////////////////////////////////////////
Operacion::~Operacion()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getNum1()
// Purpose:    Devuelve el valor del atributo num1
// Return:     float
////////////////////////////////////////////////////////////////////////
float Operacion::getNum1(void)
{
   return num1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setNum1(float newNum1)
// Purpose:    Establece el valor del atributo num1
// Parameters:
// - newNum1: nuevo valor que se asigna al atributo num1
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operacion::setNum1(float newNum1)
{
   num1 = newNum1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::calculo(float obj1, float obj2)
// Purpose:    Realiza una operación de suma entre dos números y devuelve el resultado como un valor float
// Parameters:
// - obj1: primer número a sumar
// - obj2: segundo número a sumar
// Return:     float
////////////////////////////////////////////////////////////////////////
float Operacion::calculo(float obj1, float obj2){
	return (obj1+obj2);
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::calculo(Operacion obj1, Operacion obj2)
// Purpose:    Realiza una operación de suma entre dos objetos de la clase Operacion y devuelve un nuevo objeto Operacion con el resultado
// Parameters:
// - obj1: primer objeto de la clase Operacion a sumar
// - obj2: segundo objeto de la clase Operacion a sumar
// Return:     Operacion
////////////////////////////////////////////////////////////////////////
Operacion Operacion::calculo(Operacion obj1, Operacion obj2){
	Operacion obj3;
	obj3.setNum1(obj1.getNum1()+obj2.getNum1());
	return obj3;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::imprimir()
// Purpose:    Imprime el valor del atributo num1 en la consola
// Return:     void
////////////////////////////////////////////////////////////////////////
void Operacion::imprimir(){
	std::cout<<"El resultado es: "<<num1<<std::endl;
}

