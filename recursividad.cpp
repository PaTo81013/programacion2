// recursividad.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Ricardo Patricio Peréz Maginniss

#include <iostream>
#include <conio.h>
using namespace std;
int fact(int);
int num;
int main()
{
    cout << "el numero:" <<fact(7)<< endl;
  
}
int fact(int n) 
{
    if(n==0)
    {
        n = 1;
    }
    else
    {
        n = n * fact(n - 1);
    }
    return n;
}
