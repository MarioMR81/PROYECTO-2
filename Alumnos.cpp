#include<fstream>
#include<iostream>
#include<stdlib.h>

using namespace std;


int main(){

	fstream archivo ("Registro.txt");
	int opcion, buscar;
	string nombre, carne2, carne, apellido, correo, seccion, ciclo, estado, newestado, alumno;
	int  promedio, newpromedio;
	string cadena, linea, linea2, linea3, linea4, linea5, linea6, linea7, linea8;
	string mod, mod1;
	int res= 0;
	
	cout<<" BASE DE DATOS PARA ALUMNOS "<<endl;
	cout<<"1. ----Agregar Nuevo Alumno-----"<<endl;
	cout<<"2. ----Buscar Alumno----"<<endl;
	cout<<"3. ----Modificar Datos del Alumno----"<<endl;
	cout<<"4. ----SALIR----"<<endl;
	cin>>opcion;
	cin.ignore();

	
switch(opcion)
{
	case 1:
		if(opcion == 1)
		{
			
			if(!archivo.is_open())
			{
				
				archivo.open("Registro.txt", ios::out | ios::app);
				
				
			}
			system("cls");
			cout<<"NOMBRE: "<< endl;
			getline(cin, nombre);
			cout<<"APELLIDO: "<< endl;
			getline(cin, apellido);
			cout<<"CORREO ELECTRONICO: "<< endl;
			getline(cin, correo);
			cout<<"SECCION: "<< endl;
			getline(cin, seccion);
			cout<<"CICLO ESCOLAR: "<< endl;
			getline(cin, ciclo);
			cout<<"ESTADO: "<< endl;
			getline(cin, estado);
			cout<<"PROMEDIO: "<< endl;
			cin>>promedio;
			cout<<"CARNE: " << endl;
			cin>>carne;
			cout<< endl;
				archivo << "CARNE: " << carne << endl;
				archivo << "NOMBRE: " << nombre << endl;
				archivo << "APELLIDO: " << apellido << endl;
				archivo << "CORREO ELECTRONICO: " << correo << endl;
				archivo << "SECCION: " << seccion << endl;
				archivo << "CICLO ESCOLAR: " << ciclo << endl;
				archivo << "ESTADO: " << estado << endl;
				archivo << "PROMEDIO: " << promedio << endl;
				system("cls");
			cout<<"DESEA GUARDAR DATOS DEL ALUMNO ";
			cout<<"1. SI ";
			cout<<"2. NO ";
			cin>>alumno;
			system("cls");
			if(alumno == "1"){
			cout << "Registro Guardado"<<endl;	
			return main();
			}else
			
			return main();
			archivo.close();
		}
	case 2:
	if(opcion == 2){
	if(!archivo.is_open())
	{
		archivo.open("Registro.txt", ios::in);	
	}
	cout<<"Ingrese el numero de Carné: ";
	cin>>cadena;
	while(getline(archivo, linea)){
		if(linea.find(cadena) !=string::npos)
	{
		cout<<linea<<endl;
		getline(archivo,linea2);
		cout<<linea2<<endl;
		getline(archivo, linea3);
		cout<<linea3<<endl;
		getline(archivo, linea4);
		cout<<linea4<<endl;
		getline(archivo, linea5);
		cout<<linea5<<endl;
		getline(archivo, linea6);
		cout<<linea6<<endl;
		getline(archivo, linea7);
		cout<<linea7<<endl;
		getline(archivo, linea8);
		res = 1;
		
		cout<<"ENTER PARA REGRESAR AL MENU PRINCIPAL"<<endl;
		system("pause");
		system("cls");
		return main();
		archivo.close();
	}
		
	}
	if(res == 0){
		cout<<cadena<<" No Existe "<< endl;
		cout<<"ENTER PARA REGRESAR AL MENU PRINCIPAL"<<endl;
		system("pause");
		system("cls");
		return main();
		archivo.close();	
		}
		
	
	}	
	case 3:
	if(opcion == 3){
	if(!archivo.is_open())
	{
	archivo.open("Registro.txt", ios::in);	
	}	
	cout<<"Ingrese el numero de Carné a Modificar Estado y Promedio: ";	
	cin>>mod;
	while(getline(archivo, linea)){
	if(linea.find(mod) !=string::npos)
	{
	cout<<"Modificar Estado y Promedio del Alumno No "<<linea<< nombre <<endl;
	getline(archivo,linea3);
	cout<<"Ingrese el nuevo Estado del Alumno: "<<endl;
	cin>> newestado;
	cout<<"Ingrese el nuevo Promedio: "<<endl;
	cin>> newpromedio;
	archivo>>estado;
	archivo << endl<< "NUEVO ESTADO: "<< newestado;
	archivo << endl<< "NUEVO PROMEDIO: "<< newpromedio;
	cout<<"Presione cualquier tecla para regresar al menu principal";
	system("pause");
	system("cls");
	return main();
	archivo.close();
	
	
	
	}	
		
	}
}
	case 4:
	if(opcion == 4){
	string salir;
	cout<<"DESEA SALIR DEL PROGRAMA: ";
	cout<<"1. SI ";
	cout<<"2. NO ";
	cin>>salir;
	if(salir == "1"){
		
		return 0;
	}else
	
	return main();
}
}
}
