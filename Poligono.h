#include <cstdlib>
#include <iostream>

using namespace std;

class Poligono
{
	private:
		float nlados, lado, apotema, perimetro, area;
		
	public:
		Poligono () {nlados=0; lado=0; apotema=0; perimetro=0; area=0;}
		void Visualizar();
		void CalcularPerimetro();
		void CalcularArea();
		void setNlados(float nl);
		void setLados(float l);
		void setApotema(float ap);
		float getNlados();
		float getLados();
		float getApotema();
		float getPerimetro();
		float getArea();
		
};

	void Poligono::Visualizar()
	{
		system("Cls");
		cout<<"Poligono: "<<endl;
		cout<<"Numero de lados: "<<nlados<<endl;
		cout<<"Lado: "<<lado<<endl;
		cout<<"Apotema: "<<apotema<<endl;
		cout<<"Perimetro: "<<perimetro<<endl;
		cout<<"Area: "<<area<<endl;
	}
	void Poligono::CalcularPerimetro()
	{
		perimetro = nlados*lado;
	}
	void Poligono::CalcularArea()
	{
		area = (nlados*lado)*apotema;
	}
	void Poligono::setNlados(float nl)
	{
		nlados = nl;
	}
	void Poligono::setLados(float l)
	{
		lado= l;
	}
	void Poligono::setApotema(float ap)
	{
		apotema = ap;
	}
	float Poligono::getNlados()
	{
		return nlados;
	}
	float Poligono::getLados()
	{
		return lado;
	}
	float Poligono::getApotema()
	{
		return apotema;
	}
	float Poligono::getPerimetro()
	{
		return perimetro;
	}
	float Poligono::getArea()
	{
		return area;
	}
	
