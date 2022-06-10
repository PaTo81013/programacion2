// proyecto2022_4_4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/* 
#include <iostream>
#include <string>
using namespace std;
class personaje
{
private:
    string nombre;
    int  edad;
    int iq;
    int velocidad;
  public:
      personaje(string, int, int, int);
      void mostrarpersonaje();
};
personaje::personaje(string _nombre, int _edad, int _iq, int _velocidad)
{
    nombre = _nombre;
    edad = _edad;
    iq = _iq;
    velocidad = _velocidad;
}
void personaje::mostrarpersonaje()
{
    cout << " \n nombre: \n" <<nombre<< endl;
    cout << " \n edad: \n " <<edad<< endl;
    cout << " \n iq: \n " << iq<<endl;
    cout << " \n velocidad: \n "<< velocidad<<endl;
}

int main()
{
    struct datosasesino
    {
        string nombre;
        int edad;
    };
     datosasesino asesino;
     asesino.nombre = "Juan";
     asesino.edad = 20;

    cout << " \n bienvenido, bueno hay introduccion asi que vamos a resolver un asesinato\n " << endl;
    cout << " \n contexto eres un detective muy solicitado y necesitan de tu experiencia \n " << endl;
    cout << " 1 para la primera opcion, 2 para la opcion 2";
    int opcion;
    
    cout << " \n este es tu personaje \n";
       personaje personaje1("fredo", 22,75,80);
       personaje1.mostrarpersonaje();
       
       
       
       cout << " \n 1950 la noche es muy fria, estas apunto de dormir, pero suena el telefono ¿que haces? \n";
       cout << "\n  1: tomas el telefono \n ";
       cout << "\n 2: te vas a dormir \n";
       cin >> opcion;
       if(opcion==1)
       {
           cout << " tomas el telefono";

           cout << " \n te marca el jefe de la policia, te dice que hay un caso que resolver\n  ";
           cout << " \n antes mira tu inventario (1 para el inventario,2 para no abrirlo y seguir con la historia)\n";
           cin >> opcion; 
           if(opcion==1)
           {
               cout << " \n tienes:  \nlinterna, libro, lupa\n " << endl;
               cout << " \n presiona 1 para continuar\n";
               cin >> opcion;
               if(opcion==1)
               {

               }
           }
           else
           {
               cout << " \n vas a la comisaria, y tu jefe te comenta que ha pasado algo muy extraño en la calle 13 \n ";
               cout << " \n que hay un asesino a sueldo y que ahi se esconde \n ";
               cout << " \n el jefe te da poca informacion del asesino \n";
               
               
                   cout << " \nnombre:\n " << asesino.nombre << endl;
                   cout << "\n edad: \n" << asesino.edad << endl;

                   cout << " \n luego de la informacion obtenida te diriges a la calle 13 con el objetivo de saber cual va a ser su proximo movimiento\n";
                   cout << "\n...............................................................................................................................\n";
                   cout << " llegas a la calle 13 aproximadamente al 7 pm ";
                   cout << " empiezas a investigar pero alguien a lo lejos te acecha ";
                   cout << "donde te esconderias?";
                   cout << " 1.armario";
                   cout << " 2.baño";
                   cin >> opcion;
                   if(opcion==1)
                   {
                       cout << " te escondiste en un armario pero no estas a salvo";
                       cout << " la persona te siguio y te esta buscando, que haras? ";
                       cout << " 1.esperar a que este desprevenido y noquearlo";
                       cout << " 2. seguir escondido";
                       cin >> opcion;
                       if(opcion==1)
                       {
                           cout << " lo esperaste y lo noqueaste , ahora obtendras respuestas de esa persona misteriosa";
                           cout << 
                       }

                      
                   }
                   else
                   {
                       cout << " te encondiste en un baño pero no estas a salvo ";
                       cout << " 1.esperar a que este desprevenido y noquearlo";
                       cout << " 2. seguir escondido";
                       cin >> opcion;
                       if (opcion == 1)
                       {
                           cout << " lo esperaste y lo noqueaste , ahora obtendras respuestas de esa persona misteriosa";
                          
                       }
                   }

               
           }
           
       }
       else 
       {
           cout << " \nte vas a dormir \n";
           cout << "\n fin\n ";
       }



    
}
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int opcion;
int main()
{
    cout << "bienvenido al juego donde vamos a resolver un misterio, presiona 1 para empezar " << endl;
    cin >> opcion;


    switch (opcion)
    {
     case 1:
         cout << "cargando............";
        break;
    }

}