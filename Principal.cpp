#include "Rectangulo.h"
#include "Triangulo.h"
#include "Poligono.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[])
{
	float a,p,r=0,l=0,nl=0,ld=0,ap=0,b=0,h=0,la,lb,lc;
	int opc,s=1;
	
	do
	{
		system("Cls");
		Rectangulo R;
		Triangulo T;
		Poligono P;
		Circulo C;
		Cuadrado U;
		
	cout<<"BIENVENIDO"<<endl;
	cout<<"Programa que calcula area y perimetro de una figura: "<<endl;
	cout<<"Selecciona una opcion: "<<endl;
	cout<<"1. Rectangulo"<<endl;
	cout<<"2. Triangulo"<<endl;
	cout<<"3. Poligono"<<endl;
	cout<<"4. Circulo"<<endl;
	cout<<"5. Cuadrado"<<endl;
	cin>>opc;
	switch(opc)
	{	
		case 1:
			system("Cls");
			cout<<"Rectangulo"<<endl;
			do
			{
			cout<<"Escribe la base"<<endl;
			cin>>b;
		    }while(b<1);
		    do
		    {
			cout<<"Escribe la altura"<<endl;
			cin>>h;
	        }while(h<1);
	        
			R.setBase(b);
			R.setAltura(h);
			R.CalcularPerimetro();
			R.CalcularArea();
			R.Visualizar();	
			break;
			
		case 2:
			system("Cls");
			cout<<"Triangulo"<<endl;
			do
			{
			cout<<"Escribe la medida del primer lado"<<endl;
			cin>>la;
		    }while(la<1);
		    do
		    {
			cout<<"Escribe la medida del segundo lado"<<endl;
			cin>>lb;
		    }while(lb<1);
		    do
		    {
			cout<<"Escribe la medida del tercer lado"<<endl;
			cin>>lc;
		    }while(lc<1);
			
			T.setla(la);
			T.setlb(lb);
			T.setlc(lc);
			T.CalcularPerimetro();
			T.CalcularArea();
			T.Visualizar();
			break;
			
		case 3:
			system("Cls");
			cout<<"Poligono"<<endl;
			do
			{
			cout<<"Escribe el numero de lados"<<endl;
			cin>>nl;
		    }while(nl<3);
		    do
		    {
			cout<<"Escribe la medida del lado"<<endl;
			cin>>ld;
		    }while(ld<1);
		    do
		    {
			cout<<"Escribe el aoptema"<<endl;
			cin>>ap;
		    }while(ap<1);
		    
			P.setNlados(nl);
			P.setLados(ld);
			P.setApotema(ap);
			P.CalcularPerimetro();
			P.CalcularArea();
			P.Visualizar();
			break;
			
		case 4:
			system("Cls");
			cout<<"Circulo"<<endl;
			do
			{
			cout<<"Escribe el valor del radio"<<endl;
			cin>>r;
		    }while(r<1);
		    
			C.setRadio(r);
			C.CalcularPerimetro();
			C.CalcularArea();
			C.Visualizar();
			break;
			
		case 5:
			system("Cls");
			cout<<"Cuadrado"<<endl;
			do
			{
			cout<<"Escribe el valor del lado"<<endl;
			cin>>l;
		    }while(l<1);
		    
			U.setLado(l);
			U.CalcularPerimetro();
			U.CalcularArea();
			U.Visualizar();
			break;
			
		default:
		cout<<"Selecciona una opcion correcta"<<endl;
			
	}
	
	cout<<""<<endl;
	cout<<"Desea regresar al menu?(Si=1     No=Cualquier numero)"<<endl;
	cin>>s;
	}while(s==1);
	getchar();
	system("pause");
	return 0;
}
