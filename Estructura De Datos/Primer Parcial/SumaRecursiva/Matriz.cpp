#include "Matriz.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

template <typename T>

Matriz<T>::Matriz(){
	mat1=(T **)calloc (MAX,sizeof(T*));
}

template <typename T>
T** Matriz<T>::getMat1(){
	return mat1;
}

template <typename T>
void Matriz<T>::setMat1(T** otroMat1){
	mat1=otroMat1;
}


template <typename T>
T Matriz<T>::getOrden(){
	return orden;
}

template <typename T>
void Matriz<T>::setOrden(T ord){
	orden=ord;
}

template <typename T>
void Matriz<T>::encerar(){
	for(int j=0;j<MAX;j++){
		*(mat1+j)=(T*)calloc(MAX,sizeof(T*));
	} 
}

template <typename T>
void Matriz<T>::crear(){
	//srand(time(NULL));
	for (int i = 0; i < orden; i++) {
		for (int j = 0; j < orden; j++) {
			*(*(mat1 + i) + j) = (int)((rand()%9)+1);
		}
	}
}
template <typename T>
void Matriz<T>::sumaRecursivaMatrices(Matriz<T> mat1,Matriz<T> mat2,Matriz<T> matR,int f,int c){
	if ((f >= 0) && (c >= 0)) {
		*(*(matR.getMat1() + f) + c) = *(*(mat1.getMat1() + f) + c) + *(*(mat2.getMat1() + f) + c);
		sumaRecursivaMatrices(mat1, mat2, matR, f-1, c);
		sumaRecursivaMatrices(mat1, mat2, matR, f, c-1);
	}
}
template <typename T>
void Matriz<T>::imprimirMatriz(Matriz<T> mat1,char *charMat){
	cout<<"\n La matriz " <<*charMat<< " es :\n";
	for(int i=0;i<orden;i++){
		for(int j=0;j<orden;j++){
			printf("%d",*(*(mat1.getMat1()+i)+j));
			printf("%*s",j+5,"");
		}
		cout<<"\n";
	}	
}


