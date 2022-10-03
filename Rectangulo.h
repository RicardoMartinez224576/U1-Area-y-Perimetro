#include <cstdlib>
#include <iostream>

using namespace std;

class Rectangulo
{
	private:
		float base, altura, perimetro, area;
	
	public:
		Rectangulo () {base=0; altura; perimetro=0; area=0;}
		void Visualizar();
		void CalcularPerimetro();
		void CalcularArea();
		void setBase(float b);
		void setAltura(float a);
		float getBase();
		float getAltura();
		float getPerimetro();
		float getArea();
			
};
	void Rectangulo::Visualizar()
	{
		system("Cls");
		cout<<"Rectangulo: "<<endl;
		cout<<"Base: "<<base<<endl;
		cout<<"Altura: "<<altura<<endl;
		cout<<"Perimetro: "<<perimetro<<endl;
		cout<<"Area: "<<area<<endl;
	}
	void Rectangulo::CalcularPerimetro()
	{
		perimetro = 2*(base+altura);
	}
	void Rectangulo::CalcularArea()
	{
		area = base*altura;
	}
	void Rectangulo::setBase(float b)
	{
		base = b;
	}
	void Rectangulo::setAltura(float a)
	{
		altura = a;
	}
	float Rectangulo::getBase()
	{
		return base;
	}
	float Rectangulo::getAltura()
	{
		return altura;
	}
	float Rectangulo::getPerimetro()
	{
		return perimetro;
	}
	float Rectangulo::getArea()
	{
		return area;
	}
		
