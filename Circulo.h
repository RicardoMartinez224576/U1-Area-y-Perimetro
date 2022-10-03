#include <cstdlib>
#include <iostream>

using namespace std;

class Circulo
{
	private:
		float radio, perimetro, area;
		
	public:
		Circulo () {radio=0; perimetro=0; area=0;}
		void Visualizar();
		void CalcularPerimetro();
		void CalcularArea();
		void setRadio(float r);
		float getRadio();
		float getPerimetro();
		float getArea();
};

	void Circulo::Visualizar()
	{
		system("Cls");
		cout<<"Circulo: "<<endl;
		cout<<"Radio: "<<radio<<endl;
		cout<<"Perimetro: "<<perimetro<<endl;
		cout<<"Area: "<<area<<endl;
	}
	void Circulo::CalcularPerimetro()
	{
		perimetro=(2*3.1416)*radio;
	}
	void Circulo::CalcularArea()
	{
		area=(3.1416*(radio*radio));
	}
	void Circulo::setRadio(float r)
	{
		radio = r;
	}
	float Circulo::getRadio()
	{
		return radio;
	}
	float Circulo::getPerimetro()
	{
		return perimetro;
	}
	float Circulo::getArea()
	{
		return area;
	}
	
