/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 * Nombre del archivo: Fraccion.cpp
 * Fecha de creacion: 17/05/2023 
 * Fecha de modificacion: 18/05/2023 
 * Autores:  David Toapanta, Carlos Torres, Mateo Llumigusin 
 * Descripcion: Implementacion clase Operador
 */
#include "Operador.h"
template <typename T>
T Operador<T>::getNum1(){
	return num1;
}
template <typename T>
void Operador<T>::setNum1(T nu1){
	num1=nu1;
}
template <typename T>
int Operador<T>::operator %(Operador<int> o1){
	return(num1%o1.getNum1());
}