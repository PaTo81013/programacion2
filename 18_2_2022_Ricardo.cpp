// 18_2_2022_Ricardo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m,n1,m2;
    int R;
    int potencia = 2;
    cout << "define n: " << endl;
    cin >> n;
    cout << "define m: " << endl;
    cin >> m;
    cout << "vamos a realizar la operacion n*m/n/m^m " << endl;
    R =pow ((n*m)/(n/m),m);
    if (R > 10)
    {
        
        cout<< "true" << endl;
    }
    else
    {
        
        cout<<"false" << endl;
    }
}


