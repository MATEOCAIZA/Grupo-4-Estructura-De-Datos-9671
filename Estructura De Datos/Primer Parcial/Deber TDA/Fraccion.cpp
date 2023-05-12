/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Fecha de creación: 10/05/2023 
 * Fecha de modificaciÃ³n: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * DescripciÃ³n: Implementacion clase Fraccion
 */

#include "Fraccion.h"
#include "Proceso.h"
#include <iostream>

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerador()
// Purpose:    Retorna el valor del numerador de la fracción.
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNumerador(float newNumerador)
// Purpose:    Establece el valor del numerador de la fracción.
// Parameters:
// - newNumerador: El valor del nuevo numerador.
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setNumerador(float newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominador()
// Purpose:    Retorna el valor del denominador de la fracción.
// Return:     float
////////////////////////////////////////////////////////////////////////

float Fraccion::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDenominador(float newDenominador)
// Purpose:    Establece el valor del denominador de la fracción.
// Parameters:
// - newDenominador: El valor del nuevo denominador.
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fraccion::setDenominador(float newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion(float num, float den)
// Purpose:    Constructor de la clase Fraccion que toma como parámetros 
//             el numerador y el denominador de la fracción.
// Parameters:
// - num: El valor del numerador de la fracción.
// - den: El valor del denominador de la fracción.
// Return:     void
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion(float num, float den)
{
   this->numerador=num;
   this->denominador=den;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion()
// Purpose:    Constructor de la clase Fraccion que inicializa el 
//             numerador y denominador en 0.
// Return:     void
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion(){
	this->numerador=0;
	this->denominador=0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Destructor de la clase Fraccion.
// Return:     void
////////////////////////////////////////////////////////////////////////

Fraccion::~Fraccion()
{
   // TODO : implementar
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::calculo(Fraccion obj1, Fraccion obj2)
// Purpose:    Toma dos objetos Fraccion como parámetros y devuelve otro 
//             objeto Fraccion que representa la suma de los dos objetos originales.
// Parameters:
// - obj1: El primer objeto Fraccion a sumar.
// - obj2: El segundo objeto Fraccion a sumar.
// Return:     Fraccion: El objeto Fraccion resultante de la suma.
////////////////////////////////////////////////////////////////////////

Fraccion Fraccion::calculo(Fraccion obj1, Fraccion obj2){
Fraccion obj3;
obj3.setDenominador(obj1.getDenominador()*obj2.getDenominador());
obj3.setNumerador((obj1.getNumerador()*obj2.getDenominador())+(obj2.getNumerador()*obj1.getDenominador()));
return obj3;
}

////////////////////////////////////////////////////////////////////////
// Name: Fraccion::imprimir
// Purpose: Imprime una fracción en formato de numerador/denominador
// Parameters:
// - obj: fracción a imprimir
// Return: void
////////////////////////////////////////////////////////////////////////

void Fraccion::imprimir(Fraccion obj){
std::cout<<obj.getNumerador()<<"/"<<obj.getDenominador();
}

////////////////////////////////////////////////////////////////////////
// Name: Fraccion::calculo
// Purpose: Realiza el cálculo de la división entre dos números
// Parameters:
// - obj1: dividendo
// - obj2: divisor
// Return: float con el resultado de la división
////////////////////////////////////////////////////////////////////////

float Fraccion::calculo(float obj1, float obj2){
return (obj1/obj2);
}
