#include "Operaciones.h"
#include <iostream>

using namespace std;

template<typename T>

void Operaciones<T>::multiplicacion(T val1,T val2){
	cout<<"La multiplicacion de "<<val1<<" y "<<val2<<" es: "<<(val1*val2)<<endl;
}
template <typename T>
void Operaciones<T>::multiplicacion(T val1){
	cout<<"La multiplicacion de "<<val<<" y "<<val1<<" es: "<<(val*val1)<<endl;
}