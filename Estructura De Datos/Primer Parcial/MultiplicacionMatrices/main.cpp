#include "Matriz.cpp"
#include <iostream>

using namespace std;

int main(){
	int ord=0;
	Matriz<int> matriz;
	Matriz<int> matriz2;
	Matriz<int> matrizR;
	cout<<"Ingrese el orden de las matrices: "<<endl;
	cin>>ord;
    matriz.setOrden(ord);
    matriz2.setOrden(ord);
    matrizR.setOrden(ord);
    
    matriz.encerar();
    matriz2.encerar();
    matrizR.encerar();
    
    //creo matriz
    matriz.crear();
    matriz2.crear();
    
    matriz.imprimirMatriz(matriz,"1");
    cout<<"\n";
	matriz2.imprimirMatriz(matriz2,"2");
	cout<<"\n";
	matrizR.multiplicar(matriz,matriz2,matrizR,ord);
	matrizR.imprimirMatriz(matrizR,"R");
	
	system("pause");
	return 0;
}