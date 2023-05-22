#include "Matriz.cpp"
#include <iostream>

using namespace std;

int main(){
	srand(time(NULL));
	int ord=0;
	Matriz<int> matriz1;
	Matriz<int> matriz2;
	Matriz<int> matrizR;
	
	cout<<"Ingrese la dimension de las Matrices"<<endl;
	cin>>ord;
	matriz1.setOrden(ord);
	matriz2.setOrden(ord);
	matrizR.setOrden(ord);
	matriz1.encerar();
	matriz2.encerar();
	matrizR.encerar();
	matriz1.crear();
	matriz2.crear();
	
	matriz1.imprimirMatriz(matriz1,"1");
	cout<<"\n";
	matriz2.imprimirMatriz(matriz2,"2");
	cout<<"\n";
	
	matrizR.sumaRecursivaMatrices(matriz1,matriz2,matrizR,ord,ord);
	matrizR.imprimirMatriz(matrizR,"R");
	system("pause");
	return 0;
}