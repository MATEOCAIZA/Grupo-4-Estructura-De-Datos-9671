/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.h
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripción: Implementacion clase Fraccion
 */
 
#pragma once
#if !defined(__Class_Diagram_1_Fraccion_h)
#define __Class_Diagram_1_Fraccion_h

//#pragma once
//class Proceso;

template<typename T>
class Fraccion
{
public:
   T getNumerador(void);
   void setNumerador(T newNumerador);
   T getDenominador(void);
   void setDenominador(T newDenominador);

   void imprimir(Fraccion obj);
   Fraccion(T num, T den): numerador(num), denominador(den){};
   
   Fraccion();
   ~Fraccion();
  
protected:
private:
   T numerador;
   T denominador;


};

#endif