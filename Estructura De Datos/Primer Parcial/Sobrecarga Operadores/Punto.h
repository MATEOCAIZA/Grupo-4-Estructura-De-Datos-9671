#pragma once

class Punto{
	public:
		Punto(int _x, int _y) : x(_x), y(_y) {}
		void imprimir();
		void operator=(const Punto& p2);
	private:
		int x;
		int y;
		
};