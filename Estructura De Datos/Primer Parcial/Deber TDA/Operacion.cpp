/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripción: Implementacion clase Operacion
 */
 
#include "Operacion.h"
#include <iostream>
////////////////////////////////////////////////////////////////////////
// Name:       Operacion::getNum1()
// Purpose:    Implementation of Operacion::getNum1()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Operacion::getNum1(void)
{
   return num1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::setNum1(float newNum1)
// Purpose:    Implementation of Operacion::setNum1()
// Parameters:
// - newNum1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operacion::setNum1(float newNum1)
{
   num1 = newNum1;
}


////////////////////////////////////////////////////////////////////////
// Name:       Operacion::Operacion()
// Purpose:    Implementation of Operacion::Operacion()
// Return:     
////////////////////////////////////////////////////////////////////////

Operacion::Operacion()
{
	
}

Operacion::Operacion(float nu1)
{
	this->num1=nu1;
	//this->num2=nu2;
}

////////////////////////////////////////////////////////////////////////
// Name:       Operacion::~Operacion()
// Purpose:    Implementation of Operacion::~Operacion()
// Return:     
////////////////////////////////////////////////////////////////////////

Operacion::~Operacion()
{
   // TODO : implement
}

float Operacion::calculo(float obj1, float obj2){
	return (obj1+obj2);
}

Operacion Operacion::calculo(Operacion obj1, Operacion obj2){
	Operacion obj3;
	obj3.setNum1(obj1.getNum1()+obj2.getNum1());
	return obj3;
}

void Operacion::imprimir(){
	std::cout<<"El resultado es: "<<num1<<std::endl;
}