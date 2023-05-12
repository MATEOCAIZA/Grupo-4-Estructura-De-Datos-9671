/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Fecha de creación: 10/05/2023 
 * Fecha de modificación: 11/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripción: Implementacion clase Multiplicacion
 */
 #if !defined(__Class_Diagram_1_Multiplicacion_h)
#define __Class_Diagram_1_Multiplicacion_h

class Multiplicacion{
	public:
		float calculo(float obj1, float obj2);
		Multiplicacion calculo(Multiplicacion obj1,Multiplicacion obj2);
		float getNum1(void);
		void imprimir();
   		void setNum1(float newNum1);
   		Multiplicacion();
   		Multiplicacion(float nu1);
		~Multiplicacion();
	protected:
	private:
		float num1;	
};

#endif