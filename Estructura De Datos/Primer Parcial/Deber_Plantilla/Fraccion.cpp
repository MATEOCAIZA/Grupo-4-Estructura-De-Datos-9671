/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripción: Implementacion clase Fraccion
 */
 

#include "Fraccion.h"
#include "Proceso.h"
#include <iostream>
////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerador()
// Purpose:    Implementation of Fraccion::getNumerador()
// Return:     float
////////////////////////////////////////////////////////////////////////

template<typename T>
T Fraccion<T>::getNumerador(void)
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

template<typename T>
void Fraccion<T>::setNumerador(T newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominador()
// Purpose:    Implementation of Fraccion::getDenominador()
// Return:     float
////////////////////////////////////////////////////////////////////////

template<typename T>
T Fraccion<T>::getDenominador(void)
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
template<typename T>
void Fraccion<T>::setDenominador(T newDenominador)
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

template<typename T>
Fraccion<T>::Fraccion(){
	this->numerador=0;
	this->denominador=0;
}
////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Implementation of Fraccion::~Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

template<typename T>
Fraccion<T>::~Fraccion()
{
   // TODO : implement
}





template<typename T>
void Fraccion<T>::imprimir(Fraccion obj){
	std::cout<<obj.getNumerador()<<"/"<<obj.getDenominador();
}
