// ahorcado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()

{
	char frase[60], rep[90], temporal[100];
	int longitud, i, j, inicial, acertado = 0, temp = 0, oportunidades = 3;
	int repetido = 0, gano = 0;

	cout << "\n ahorcado \n " << endl;
	cout << " pon una palabra " << endl;
	cin>>(frase);

	longitud = 0;
	inicial = 0;
	j = 0;
	rep[0] = ' ';
	rep[1] = ' \0 ';

	do 
	{
		temp = 0;
		if (inicial == 0) 
		{
            for (i = 0; i < strlen(frase); i++) {
                if (frase[i] == ' ') {
                    temporal[i] = ' ';
                    longitud++;
                }
                else {
                    temporal[i] = '_';
                    longitud++;
                }
            }
        }

        inicial = 1;

        temporal[longitud] = '\0';

        for (i = 0; i < strlen(rep); i++) {
            if (rep[i] == frase) {
                repetido = 1;
                break;
            }
            else {
                repetido = 0;
            }
        }

        if (repetido == 0) {
            for (i = 0; i < strlen(frase); i++) {
                if (frase[i] == p) {
                    temporal[i] = frase;
                    acertado++;
                    temp = 1;
                }
            }
        }

        if (repetido == 0) {
            if (temp == 0) {
                oportunidades = oportunidades - 1;
            }
        }
        else {
            cout << "Ya se ha introducido este caracter";
            cout << "\n\n";
        }

        cout << "\n";

        for (i = 0; i < strlen(temporal); i++) {
            cout << (" %c ", temporal[i]);
        }

        cout << "\n";

        if (strcmp(frase, temporal) == 0) {
            gano = 1;
            break;
        }

        cout << ("\n");
        cout << ("Letras Acertadas: %d", acertado);
        cout << ("\n");
        cout << ("Oportunidades Restantes: %d", oportunidades);
        cout << ("\n");

        rep[j] = pal;
        j++;

        if (oportunidades == 0)
        {
            break;
        }

        cout << ("Introduzca una letra:");
        cin>>("\n%c", &pal);

    } while (oportunidades != 0);


    if (gano) {
        cout << ("\n\n");
        cout<<("Enhorabuena, has ganado.");
    }
    else {
        cout<<("\n\n");
        cout<<("Has perdido.");
    }

    cout<<("\n\n");
    return 0;

}

		
	

