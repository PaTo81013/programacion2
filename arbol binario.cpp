// arbol binario.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct Nodo 
{
    int dato;
    Nodo *der;
    Nodo *izq;

};
void menu();
Nodo* crearNodo(int);
void insertarNodo(Nodo*&, int);
void mostrararbol(Nodo*, int);

Nodo *arbol = NULL;

int main()
{
    menu();
    getch();

}
void menu() 
{
    int dato, opcion,contador=0;
    do 
    {
        cout<< " \n MENU: ";
        cout << "insertar:";
        cout << " mostrar arbolito ";
        cout<<" salir" ;
        cout << "opcion";
        cin >> opcion;
        switch (opcion)
        {
        case 1:cout << " dame un numero ";
            cin >> dato;
            insertarNodo(arbol, dato);
            cout << " \n ";
            system("pause");
            break;
        case 2: cout << " mostrar arbolito";
            mostrararbol(arbol, contador);
            cout << " \n ";
                system("pause");
            break;
        }
        system("cls");
    } while (opcion != 3);
}

Nodo* crearNodo(int n) 
{
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    return nuevo_nodo;

}
void insertarNodo(Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        Nodo* nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }
    else
    {
        int valoraiz = arbol->dato;
        if (n < valoraiz)
        {
            insertarNodo(arbol->izq, n);
        }
        else
        {
            insertarNodo(arbol->der, n);
        }
    }
}
void mostrararbol(Nodo* arbol, int cont) 
{
    if(arbol==NULL)
    {
        return;
    }
    else
    {
        mostrararbol(arbol->der, cont + 1);
        for (int i = 0; i < cont; i++) 
        {
            cout << "  ";
        }
        cout << arbol->dato << endl;
        mostrararbol(arbol->izq, cont + 1);
    }
}