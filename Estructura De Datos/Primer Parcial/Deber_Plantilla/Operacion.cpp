/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripción: Implementacion clase Operacion
 */
 
#include "Operacion.h"
#include "Fraccion.h"

float Operacion::calculo(float obj1, float obj2){
	return (obj1/obj2);
}

Fraccion<float> Operacion::calculo(Fraccion<float> obj1, Fraccion<float> obj2)
{
	Fraccion<float> obj3((obj1.getNumerador() * obj2.getDenominador()) + (obj2.getNumerador() * obj1.getDenominador()), (obj1.getDenominador() * obj2.getDenominador()));
	return (obj3);
}


