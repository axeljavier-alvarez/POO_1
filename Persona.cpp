// AXEL JAVIER GUADALUPE ALVAREZ FELIPE
// CARNET 7691-23-8896
// TAREA 1

#include <iostream>
using namespace std;
class Persona {
	// atributos
	protected : string nombres, apellidos, direccion;
	int telefono;
	
	// constructor
	protected :
		Persona(){
			
		}
		
		Persona(string nom, string ape, string dir, int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
		}
	
	
	// metodos del crud
	void mostrar();
};
