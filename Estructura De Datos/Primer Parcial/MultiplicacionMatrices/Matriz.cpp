#include "Matriz.h"
#include <iostream>

using namespace std;

template <typename T>
Matriz<T>::Matriz(){
	mat=(T **)calloc (MAX,sizeof(T*));
}

template <typename T>
T** Matriz<T>::getMat(){
	return mat;
}

template <typename T>
void Matriz<T>::setMat(T** otroMat1){
	mat=otroMat1;
}


template <typename T>
T Matriz<T>::getOrden(){
	return orden;
}

template <typename T>
void Matriz<T>::setOrden(T otroOrden){
	orden=otroOrden;
}

template <typename T>
void Matriz<T>::encerar(){
	for(int j=0;j<MAX;j++){
		*(mat+j)=(T*)calloc(MAX,sizeof(T*));
	} 
}

template <typename T>
void Matriz<T>::crear(){
	for(int i=0;i<orden;i++){
		for(int j=0;j<orden;j++){
			*(*(mat + i) + j) = (int)((rand()%9)+1);
		}
	}
}


template <typename T>
void Matriz<T>::multiplicar(Matriz<T> mat1,Matriz<T> mat2,Matriz<T> matrizR, T orden){
	int sum=0;
	for(int i=0;i<orden;i++){
		for(int j=0;j<orden;j++){
			for(int k=0;k<orden;k++){
			sum+=(*(*(mat1.getMat()+i)+k)) * (*(*(mat2.getMat()+k)+j)); //	C[i][j]+=A[i][k]*B[k][j];
			}
			*(*(matrizR.getMat()+i)+j)=sum;
			sum=0;
		}
	}
}

template <typename T>
void Matriz<T>::imprimirMatriz(Matriz<T> mat1,char *charMat){
	int ** matAux2=mat1.getMat();
	cout<<"\n La matriz " <<*charMat<< " es :\n";
	for(int i=0;i<orden;i++){
		for(int j=0;j<orden;j++){
			printf("%d",*(*(matAux2+i)+j));
			printf("%*s",j+5,"");
		}
		cout<<"\n";
	}
}