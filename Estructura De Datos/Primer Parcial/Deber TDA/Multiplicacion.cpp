/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Multiplicacion.cpp
 * Fecha de creaciÃ³n: 10/05/2023 
 * Fecha de modificaciÃ³n: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * DescripciÃ³n: Implementacion clase Fraccion
 */
 #include "Multiplicacion.h"
 #include <iostream>
 
 //////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::getNum1()
// Propósito: Obtener el valor del primer número.
// Returna: float
//////////////////////////////////////////////////////////////////////////

float Multiplicacion::getNum1(void)
{
   return num1;
}

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::setNum1(float newNum1)
// Propósito: Establecer el valor del primer número.
// Parámetros:
// - newNum1: Nuevo valor para el primer número.
// Returna: void
//////////////////////////////////////////////////////////////////////////

void Multiplicacion::setNum1(float newNum1)
{
   num1 = newNum1;
}

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::Multiplicacion()
// Propósito: Constructor de la clase Multiplicacion.
// Returna: void
//////////////////////////////////////////////////////////////////////////

Multiplicacion::Multiplicacion()
{
}

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::Multiplicacion(float nu1)
// Propósito: Constructor de la clase Multiplicacion con un parámetro.
// Parámetros:
// - nu1: Valor del primer número.
// Returna: void
//////////////////////////////////////////////////////////////////////////

Multiplicacion::Multiplicacion(float nu1)
{
	this->num1=nu1;
}

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::~Multiplicacion()
// Propósito: Destructor de la clase Multiplicacion.
// Returna: void
//////////////////////////////////////////////////////////////////////////

Multiplicacion::~Multiplicacion()
{
   // TODO : implement
}

//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::calculo(float obj1, float obj2)
// Propósito: Realizar la operación de multiplicación con dos números.
// Parámetros:
// - obj1: Primer número.
// - obj2: Segundo número.
// Returna: float
//////////////////////////////////////////////////////////////////////////

 float Multiplicacion::calculo(float obj1, float obj2){
 	return (obj1*obj2);
 }
 
//////////////////////////////////////////////////////////////////////////
// Nombre: Multiplicacion::calculo(Multiplicacion obj1,Multiplicacion obj2)
// Propósito: Realizar la operación de multiplicación con dos objetos de la clase Multiplicacion.
// Parámetros:
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
// Propósito: Imprimir el resultado de la operación de multiplicación.
// Returna: void
//////////////////////////////////////////////////////////////////////////

void Multiplicacion::imprimir(){
	std::cout<<"El resultado es: "<<num1<<std::endl;
}
