/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  Fernando
 * Modified: miércoles, 10 de mayo de 2023 8:20:15
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"
#include "Proceso.h"
#include <iostream>
////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerador()
// Purpose:    Implementation of Fraccion::getNumerador()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNumerador(float newNumerador)
// Purpose:    Implementation of Fraccion::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setNumerador(float newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominador()
// Purpose:    Implementation of Fraccion::getDenominador()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDenominador(float newDenominador)
// Purpose:    Implementation of Fraccion::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setDenominador(float newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion(float num, float den)
// Purpose:    Implementation of Fraccion::Fraccion()
// Parameters:
// - num
// - den
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion(float num, float den)
{
   // TODO : implement
   this->numerador=num;
   this->denominador=den;
}

Fraccion::Fraccion(){
	this->numerador=0;
	this->denominador=0;
}
////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Implementation of Fraccion::~Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::~Fraccion()
{
   // TODO : implement
}

Fraccion Fraccion::calculo(Fraccion obj1, Fraccion obj2){
	Fraccion obj3;
	obj3.setDenominador(obj1.getDenominador()*obj2.getDenominador());
	obj3.setNumerador((obj1.getNumerador()*obj2.getDenominador())+(obj2.getNumerador()*obj1.getDenominador()));
	return obj3;
}
	
void Fraccion::imprimir(Fraccion obj){
	std::cout<<obj.getNumerador()<<"/"<<obj.getDenominador();
}

float Fraccion::calculo(float obj1, float obj2){
	return (obj1/obj2);
}