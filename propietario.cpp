#include "persona.cpp"
#include <iostream>

using namespace std;

class propietario : Persona {

	private : {}
	           
	
	public : 
	propietario(string nom, string ape, string dir,string fecha, int tel, string n, string cui): persona(nom,ape,dir,tel,fecha){
		nit = n;
		cui =c;   
	}
	
	void mostrar(){
    		cout << "DATOS DEL PROPIETARIO: "<< endl;
    		cout << "NOMBRES: " << nombres << endl;
    		cout << "APELLIDOS: " << apellidos << endl;
    		cout << "DIRECCION: " << direccion << endl;
    		cout << "FECHA DE NACIMIENTO: " << fecha_nacimiento << endl;
    		cout << "TELEFONO: "<< telefono << endl;
    		cout << "NIT: " << nit << endl;
    		cout << "CUI: "<< cui << endl;
    		
		}
		
		void agregar() {
			cout << "ATRIBUTOS AGREGADOS EXITOSAMENTE"<< endl; 
		}
};
