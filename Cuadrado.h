#include <cstdlib>
#include <iostream>

using namespace std;

class Cuadrado
{
	private:
		float lado, perimetro, area;
		
	public:
		Cuadrado () {lado=0; perimetro=0; area=0;}
		void Visualizar();
		void CalcularPerimetro();
		void CalcularArea();
		void setLado(float l);
		float getLado();
		float getPerimetro();
		float getArea();
};

	void Cuadrado::Visualizar()
	{
		system("Cls");
		cout<<"Cuadrado: "<<endl;
		cout<<"Lado: "<<lado<<endl;
		cout<<"Perimetro: "<<perimetro<<endl;
		cout<<"Area: "<<area<<endl;
	}
	void Cuadrado::CalcularPerimetro()
	{
		perimetro=lado*4;
	}
	void Cuadrado::CalcularArea()
	{
		area=lado*lado;
	}
	void Cuadrado::setLado(float l)
	{
		lado = l;
	}
	float Cuadrado::getLado()
	{
		return lado;
	}
	float Cuadrado::getPerimetro()
	{
		return perimetro;
	}
	float Cuadrado::getArea()
	{
		return area;
	}
	
