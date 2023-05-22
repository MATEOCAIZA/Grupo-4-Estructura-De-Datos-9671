#pragma once
#define MAX 10

template <typename T>
class Matriz{
	private:
		T** mat;
		T orden;
	public:
		void encerar();
		void crear();
		void multiplicar(Matriz <T> mat1,Matriz <T> mat2,Matriz<T> matrizR,T);
		void imprimirMatriz(Matriz <T> mat1, char* charMat);
		T** getMat();	
		T getOrden();
		void setMat(T**); 
		void setOrden(T);
		Matriz();
};
	

