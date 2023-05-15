/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripción: Implementacion clase Operacion
 */
 
#if !defined(__Class_Diagram_1_Operacion_h)
#define __Class_Diagram_1_Operacion_h
#include"Fraccion.h"
#include"Proceso.h"


class Operacion{
	public:
		float calculo(float obj1, float obj2);
		Fraccion<float>calculo(Fraccion<float>fraccion1, Fraccion<float>fraccion2);
	protected:
	private:	
};



#endif