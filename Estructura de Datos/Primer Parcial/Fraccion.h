/***********************************************************************
 * Module:  Fraccion.h
 * Author:  David Toapanta, Carlos Torres, Mateo Llumigusin
 * Modified: miercoles, 10 de mayo de 2023 8:20:15
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/
#pragma once
#if !defined(__Class_Diagram_1_Fraccion_h)
#define __Class_Diagram_1_Fraccion_h

//#pragma once
class Proceso;

class Fraccion
{
public:
   float getNumerador(void);
   void setNumerador(float newNumerador);
   float getDenominador(void);
   void setDenominador(float newDenominador);
   float calculo(float obj1, float obj2);
   Fraccion calculo(Fraccion obj1, Fraccion obj2);
   void imprimir(Fraccion obj);
   Fraccion(float num, float den);
   Fraccion();
   ~Fraccion();

protected:
private:
   float numerador;
   float denominador;


};

#endif