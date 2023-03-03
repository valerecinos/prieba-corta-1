#include <iostream>
using namespace std;


class persona {
	
	protected  : string nombres, apellidos, direccion, fecha_nacimiento;
	            int telefono;
	            
    protected : persona () { }
    
    persona (string nom, string ape, string dir,string fecha, int tel){
    	nombres = nom;
    	apellidos = ape;
    	direccion = dir;
    	fecha_nacimiento = fecha;
    	telefono = tel;
    	
	}
	

void agregar();
void mostrar();
	
	

	
};