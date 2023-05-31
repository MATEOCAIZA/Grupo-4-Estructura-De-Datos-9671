#include <iostream>
#include "Operaciones.cpp"
int recursivamcd(int a, int b){
	if(b==0)return a;
	else recursivamcd(b,a%b);
}

int main(){
	
	
//	Operaciones <int> op(5);
//	op.multiplicacion(7,8);
//	op.multiplicacion(9);
//	
//	int resultado=recursivamcd(30,7);
//	cout<<resultado<<endl;
	cout<<15%3<<endl;
	system("pause");
	return 0;
}