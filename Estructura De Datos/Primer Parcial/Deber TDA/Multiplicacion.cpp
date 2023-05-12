/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripción: Implementacion clase Fraccion
 */
 #include "Multiplicacion.h"
 #include <iostream>
 ////////////////////////////////////////////////////////////////////////
// Name:       Multiplicacion::getNum1()
// Purpose:    Implementation of Multiplicacion::getNum1()
// Return:     float
////////////////////////////////////////////////////////////////////////

float Multiplicacion::getNum1(void)
{
   return num1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Multiplicacion::setNum1(float newNum1)
// Purpose:    Implementation of Multiplicacion::setNum1()
// Parameters:
// - newNum1
// Return:     void
////////////////////////////////////////////////////////////////////////

void Multiplicacion::setNum1(float newNum1)
{
   num1 = newNum1;
}

////////////////////////////////////////////////////////////////////////
// Name:       Multiplicacion::Multiplicacion()
// Purpose:    Implementation of Multiplicacion::Multiplicacion()
// Return:     
////////////////////////////////////////////////////////////////////////

Multiplicacion::Multiplicacion()
{
}

Multiplicacion::Multiplicacion(float nu1)
{
	this->num1=nu1;
}
////////////////////////////////////////////////////////////////////////
// Name:       Multiplicacion::~Multiplicacion()
// Purpose:    Implementation of Multiplicacion::~Multiplicacion()
// Return:     
////////////////////////////////////////////////////////////////////////

Multiplicacion::~Multiplicacion()
{
   // TODO : implement
}

 float Multiplicacion::calculo(float obj1, float obj2){
 	return (obj1*obj2);
 }
 
 Multiplicacion Multiplicacion::calculo(Multiplicacion obj1,Multiplicacion obj2){
 	Multiplicacion obj3;
 	obj3.setNum1(obj1.getNum1()*obj2.getNum1());
 	return obj3;
 }

void Multiplicacion::imprimir(){
	std::cout<<"El resultado es: "<<num1<<std::endl;
}