#pragma once
#define MAX 10

template <typename T>
class Matriz{
	private:
		T** mat1;
		T orden;
	public:
		Matriz();
		T** getMat1();
		void setMat1(T** otroMat1);
		T getOrden();
		void setOrden(T ord);
		void encerar();
		void crear();
		void imprimirMatriz(Matriz<T> mat1,char *charMat);
		void sumaRecursivaMatrices(Matriz<T> mat1,Matriz<T> mat2,Matriz<T> matR,int f,int c);
		
};