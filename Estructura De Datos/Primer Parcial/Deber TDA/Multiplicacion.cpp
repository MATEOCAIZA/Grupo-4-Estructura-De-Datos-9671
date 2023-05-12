/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Multiplicacion.cpp
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripción: Implementacion clase Fraccion
 */
 #include "Multiplicacion.h"
 #include <iostream>
 
 //////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::getNum1()
// Prop�sito: Obtener el valor del primer n�mero.
// Returna: float
//////////////////////////////////////////////////////////////////////////

float Multiplicacion::getNum1(void)
{
   return num1;
}

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::setNum1(float newNum1)
// Prop�sito: Establecer el valor del primer n�mero.
// Par�metros:
// - newNum1: Nuevo valor para el primer n�mero.
// Returna: void
//////////////////////////////////////////////////////////////////////////

void Multiplicacion::setNum1(float newNum1)
{
   num1 = newNum1;
}

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::Multiplicacion()
// Prop�sito: Constructor de la clase Multiplicacion.
// Returna: void
//////////////////////////////////////////////////////////////////////////

Multiplicacion::Multiplicacion()
{
}

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::Multiplicacion(float nu1)
// Prop�sito: Constructor de la clase Multiplicacion con un par�metro.
// Par�metros:
// - nu1: Valor del primer n�mero.
// Returna: void
//////////////////////////////////////////////////////////////////////////

Multiplicacion::Multiplicacion(float nu1)
{
	this->num1=nu1;
}

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::~Multiplicacion()
// Prop�sito: Destructor de la clase Multiplicacion.
// Returna: void
//////////////////////////////////////////////////////////////////////////

Multiplicacion::~Multiplicacion()
{
   // TODO : implement
}

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::calculo(float obj1, float obj2)
// Prop�sito: Realizar la operaci�n de multiplicaci�n con dos n�meros.
// Par�metros:
// - obj1: Primer n�mero.
// - obj2: Segundo n�mero.
// Returna: float
//////////////////////////////////////////////////////////////////////////

 float Multiplicacion::calculo(float obj1, float obj2){
 	return (obj1*obj2);
 }
 
//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::calculo(Multiplicacion obj1,Multiplicacion obj2)
// Prop�sito: Realizar la operaci�n de multiplicaci�n con dos objetos de la clase Multiplicacion.
// Par�metros:
// - obj1: Primer objeto de la clase Multiplicacion.
// - obj2: Segundo objeto de la clase Multiplicacion.
// Returna: Multiplicacion
//////////////////////////////////////////////////////////////////////////
 
 Multiplicacion Multiplicacion::calculo(Multiplicacion obj1,Multiplicacion obj2){
 	Multiplicacion obj3;
 	obj3.setNum1(obj1.getNum1()*obj2.getNum1());
 	return obj3;
 }

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::imprimir()
// Prop�sito: Imprimir el resultado de la operaci�n de multiplicaci�n.
// Returna: void
//////////////////////////////////////////////////////////////////////////

void Multiplicacion::imprimir(){
	std::cout<<"El resultado es: "<<num1<<std::endl;
}
