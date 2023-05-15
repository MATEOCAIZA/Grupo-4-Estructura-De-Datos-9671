/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Proceso.h
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripción: Implementacion clase Proceso
 */
 
#include "Fraccion.h"

#if !defined(__Class_Diagram_1_Proceso_h)
#define __Class_Diagram_1_Proceso_h


class Proceso
{
public:
   virtual float calculo(float obj1, float obj2) = 0;
   virtual Fraccion<float> calculo(Fraccion<float> obj1, Fraccion<float> obj2) = 0;
protected:
private:
};

#endif