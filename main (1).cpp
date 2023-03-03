#include <iostream>
#include "propietario.cpp"
using namespace std;

int main () {
	
	string n,nom,ape,dir,fecha;
	int tel;
	double c;
	cout<<"Ingrese Nit:"<< endl;
	cin>>n;
	cout <<"Ingrese CUI:"<< endl;
	cin >> c;
	cout<<"Ingrese Nombres:"<< endl;
	cin>>nom;
	cout<<"Ingrese Apellidos:"<< endl;
	cin>>ape;
	cout<<"Ingrese Direccion:"<< endl;
	cin>>dir;
	cout<<"Ingrese Nacimiento:"<< endl;
	cin>>fecha;
	cout<<"Ingrese Telefono:"<< endl;
	cin>>tel;
	
	Propietario obj = Propietario(nombres,apellidos,direccion,fecha_nacimiento,telefono,nit,cui);
	obj.mostrar();
	obj.Agregar();
	
	
}
