/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Fecha de creacion: 17/05/2023 
 * Fecha de modificacion: 18/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripcion: Implementacion clase Operador
 */
#pragma once
template <typename T>
class Operador{
	public:
		Operador(T nu1):num1(nu1){}
		int operator %(Operador<int> o1);
		T getNum1(void);
		void setNum1(T nu1);
	private:
		T num1;
};