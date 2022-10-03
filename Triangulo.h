#include <cstdlib>
#include <iostream>
#include <Math.h>
using namespace std;

class Triangulo
{
	private:
		float sm, la, lb, lc, perimetro, area;
	
	public:
		Triangulo () {sm=0, la=0; lb=0; lc=0, perimetro=0; area=0;}
		void Visualizar();
		void CalcularPerimetro();
		void CalcularArea();
		void setla(float l1);
		void setlb(float l2);
		void setlc(float l3);
		float getla();
		float getlb();
		float getlc();
		float getPerimetro();
		float getArea();
			
};
	void Triangulo::Visualizar()
	{
		system("Cls");
		cout<<"Triangulo: "<<endl;
		cout<<"la: "<<la<<endl;
		cout<<"lb: "<<lb<<endl;
		cout<<"lc: "<<lc<<endl;
		cout<<"Semiperimetro: "<<sm<<endl;
		cout<<"Perimetro: "<<perimetro<<endl;
		cout<<"Area: "<<area<<endl;
	}
	void Triangulo::CalcularPerimetro()
	{
		perimetro = la+lb+lc;
	}
	void Triangulo::CalcularArea()
	{
		sm = (la+lb+lc)/2;
		area = sqrt(sm*(sm-la)*(sm-lb)*(sm-lc));
	}
	void Triangulo::setla(float l1)
	{
		la = l1;
	}
	void Triangulo::setlb(float l2)
	{
		lb = l2;
	}
	void Triangulo::setlc(float l3)
	{
		lc = l3;
	}
	float Triangulo::getla()
	{
		return la;
	}
	float Triangulo::getlb()
	{
		return lb;
	}
	float Triangulo::getlc()
	{
		return lc;
	}
	float Triangulo::getPerimetro()
	{
		return perimetro;
	}
	float Triangulo::getArea()
	{
		return area;
	}
	
