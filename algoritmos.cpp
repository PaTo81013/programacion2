// algoritmos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;



int main()
{


    struct datoslibros
    {
        int DNS;
        string nombre;
        int n_paginas;
        string autor;
    };
    datoslibros libros;
    libros.nombre = "   ";
    libros.n_paginas;
    libros.autor = "   ";
    libros.DNS;




    system("color 74");
    int op;
    cout << " \n 1) anadir libro \n 2) organizar \n 3) metodo de busqueda ";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << " \n elegiste la opcion de anadir libro: " << endl;
        {
            cout << " \n nombre:  ";
            cin >> libros.nombre;

            cout << " \n numero de paginas: ";
            cin >> libros.n_paginas;

            cout << " \n autor: ";
            cin >> libros.autor;


            cout << " \n" << libros.nombre << endl;

            cout << "\n " << libros.n_paginas << endl;

            cout << " \n " << libros.autor << endl;

        }
        break;



    case 2:
        cout << " \n elegiste la opcion organizar " << endl;
        break;

    case 3:
        cout << " \n elegiste la opcion metodo de busqueda " << endl;
        break;
    }
}