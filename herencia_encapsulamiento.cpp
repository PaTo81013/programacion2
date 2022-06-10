// herencia_encapsulamiento.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
 


class Equipos 
{
private:
	string nombre;
	int titulos;
	int jugadores;
public:
	Equipos(string, int, int);
	void mostrarequipos();
};
Equipos::Equipos(string _nombre, int _titulos, int _jugadores)
{

    nombre = _nombre;
	titulos = _titulos;
	jugadores = _jugadores;
}

class Chivas:public Equipos 
{
 private:
	 string nacionalidad;
public:
	Chivas(string, int, int, string);
	void mostrarChivas();
};
Chivas::Chivas(string _nombre, int _titulos, int _jugadores, string _nacionalidad):Equipos(_nombre, _titulos,_jugadores)
{
	nacionalidad = _nacionalidad;
}
class America :public Equipos 
{
private:
	int  robos;
public:
	America(string, int, int, string, int);
		void mostrarAmerica();
};
America::America(string _nombre, int _titulos, int _jugadores, string _nacionalidad, int _robos) :Equipos(_nombre, _titulos, _jugadores) {
	robos = _robos;
}
void Equipos :: mostrarequipos() 
{
	cout << " tu equipo se llama: " << nombre << endl;
	cout << " tiene este numero de titulos: " << titulos << endl;
	cout << "tienen estos  " << jugadores << "jugadores en el campo " << endl;
}
void Chivas::mostrarChivas() 
{
	mostrarequipos();
	cout << " sus jugadores son de esta nacionalidad: " << nacionalidad << endl;
}
void America::mostrarAmerica() 
{
	mostrarequipos();
	cout <<"este equipo a robado " << robos << "veces el campeonato" << endl;

}

int main()
{
	Chivas Chivas1("chivas", 12, 11, "mexicana");
	Chivas1.mostrarChivas();
	cout << " \n " << endl;
	America America1("america", 12, 11, "paraguayos", 1000);
	America1.mostrarAmerica();
	cout << " \n " << endl;
}





