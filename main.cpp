#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingresar nombres: ";
	cin>>nombres;
	cout<<"Ingresar apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	
	// Instancia de un objeto
	
	 Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	 obj.mostrar();
	
	// SOLO MODIFICAR EL NIT xd
	cout<<"Ingresar Nit: ";
    cin>>nit;
	obj.setNit(nit);
	cout<<"Su nit es "<<obj.getNit();
	// USAR EL METODO GET PARA MOSTRAR SOLO EL NIT
	// cout<<"Datos del cliente: "<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono();
	
	/* LLAMAR OBJETOS CON EL CONSTRUCTOR VACIO */
	/* Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar(); */
	
	
}
