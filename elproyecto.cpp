// elproyecto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <stdio.h>
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
        cout << " \n nombre: \n"<<nombre << endl;
        cout << " \n edad: \n " << edad << endl;
        cout << " \n iq: \n " << iq << endl;
        cout << " \n velocidad: \n " << velocidad << endl;
    }

    int main()
    {
        system("color 74");
        string decir;

        struct datosasesino
        {
            string nombre;
            int edad;
        };
        datosasesino asesino;
        asesino.nombre = "Francesco";
        asesino.edad = 20;
        int opcion;
        cout << "\n bienvenido a atrapar a un asesino, elije buenas decisiones\n " << endl;
        cout << " MENU ";
        cout << " \n 1. jugar \n " << endl;
        cout << "\n 2.saber de que trata la historia \n " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "cargando............";
            system("pause");
            break;



        case 2:
            cout << " policio intentado a atrapar a un asesino";
            break;

        }

        if (opcion == 1)
        {
            cout << " \n bueno bienvenido, este es tu personaje \n";
            personaje personaje1("fredo", 22, 75, 80);
            personaje1.mostrarpersonaje();
            system("pause");

            cout << "ya que viste a tu personaje, checa el inventario (presiona 1)";
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                cout << "\n Inventario\n";
                cout << " \n [linterna]\n[celular]\n";
                system("pause");

            }
            cout << " \nbueno sigamos, picale al 1 para avanzar\n";
            cin >> opcion;
            if (opcion == 1)
            {
                cout << " cargando..............";
                system("pause");
                cout << " \n jefe: fredo quiero que vayas a el vencidario 69 hubo un asesinato y quiero que busques unas pruebas\n ";
                cout << " fredo: okay jefe, ahi voy, le estare al tanto";
                cout << " okay fredo ";
                system(" pause");
                cout << " \n1 para continuar\n";
                if (opcion == 1)
                {
                    cout << " fredo llega al lugar y de repente le llega una llamada desconocida";
                    cout << "\n 1. contestas\n ";
                    cout << " \n2. sigues investigando\n";
                    cin >> opcion;
                    switch (opcion)
                    {
                    case 1:
                        cout << " \ncontestate al desconocido.....\n.";
                        cout << " \ndesconocido: no sabes lo que haces se pondran feas las cosas.....\n";
                        cout << "\n 1. para continuar\n";
                        cin >> opcion;
                        if (opcion == 1)
                        {
                            cout << " \nseguias investigando en el vecindario y ves que alguien te sigue\n ";
                            cout << " \nque vas a hacer fredo?\n";
                            cout << " \n1. esconderte\n";
                            cout << " \n2. esperar que va hacer el que te sigue\n";
                            cin >> opcion;
                            if (opcion == 1)
                            {
                                cout << " \nte escondiste y ves a la persona, y ves que esta encapuchado\n";
                                cout << " \nque haces fredo?\n";
                                cout << " \n1. dejas que se vaya y sigues investigando\n ";
                                cout << "\n2. intentas atacarlo\n ";
                                cin >> opcion;
                                if (opcion == 1)
                                {
                                    cout << " \ndejaste que se fuera y siguiste investigando\n ";
                                    system("pause ");
                                    cout << " \n conseguiste info del asesino: \n";
                                    cout << " \nnombre:\n " << asesino.nombre << endl;
                                    cout << "\n edad: \n" << asesino.edad << endl;
                                    cout << " \nvas a la comisaria a entregar la info\n";
                                    cout << " \nllegas a la comisaria.............\n";
                                    cout << " \n1 para continuar\n ";
                                    cin >> opcion;
                                    if (opcion == 1)
                                    {
                                        cout << "\n el jefe te pide que entregues la info\n ";
                                        cout << " \nsi?\n ";//es de a fuerzas entregarla
                                        if (opcion == 1)
                                        {
                                            cout << " \n la entregaste con exito\n";
                                            cin >> opcion;
                                            if (opcion == 1)
                                            {
                                                cout << "\n te tiene otra mision para ti, un poco mas oscura\n";
                                                cout << " \nhubieron algunos disturbios en un zona y te pide que investigues en la noche\n";
                                                cin >> opcion;
                                                if (opcion == 1)
                                                {
                                                    cout << "  \nnecesito que te equipes la linterna \n";
                                                    cin >> opcion;
                                                    if (opcion)
                                                    {
                                                        cout << " \nte quipaste la linterna\n " << endl;
                                                        cout << "\n 1 para continuar\n ";
                                                        cin >> opcion;
                                                        if (opcion)
                                                        {
                                                            cout << "\nllegaste a la zona, todo se ve muy turbio \n";
                                                            cout << " ves una puerta, desea entrar? ";
                                                            cin >> opcion;
                                                            if (opcion == 1)
                                                            {
                                                                cout << " entraste y ves muchos cadaveres ";
                                                                cout << " escuchas pasos y te encondes";
                                                                cout << " ves a la misma persona de antes ";
                                                                cout << " quieres afrontralo?";
                                                                if (opcion == 1)
                                                                {
                                                                    cout << " lo afrontaste, todo sale mal al punto de que te noquea y estas inconciente";
                                                                    cout << " te despiertas amarrado a una silla ";
                                                                    cout << "  ves al asesino y te dice te dije que se iba a poner peor";
                                                                    cout << " pero mientras tu estabas inconsciente el habia derramado gasolina en el lugar";
                                                                    cout << " el asesino se va ";
                                                                    cout << " tienes que escapar a tu alrededor tienes un cristal roto que haces fredo?";
                                                                    cout << " ir por el cristal o no ir por el cristal ";
                                                                    cin >> opcion;
                                                                    if (opcion == 1)
                                                                    {
                                                                        cout << " fuiste por el cristal ";
                                                                        cout << " te salvaste ";
                                                                        cout << " estas enojado y golpeas la pared  ";
                                                                        cout << " pow " << endl;
                                                                        cout << " y formas un plan ";
                                                                        cout << " llamas al ladron ";
                                                                        cout << "  que le dirias? ";
                                                                        cin >> decir;
                                                                        cout << " okay muy sabio tu comentario: " << decir << endl;
                                                                        cin >> opcion;
                                                                        if (opcion == 1)
                                                                        {
                                                                            cout << "se ofendio el asesino ";
                                                                            cout << " ahora lo veras en un lugar";
                                                                            cout << "1 para siguiente ";
                                                                            cin >> opcion;
                                                                            if (opcion == 1)
                                                                            {
                                                                                cout << " lo acorralaste ";
                                                                                cout << " ahora decidde si muere o vive";
                                                                            }
                                                                            if (opcion == 1)
                                                                            {
                                                                                cout << " lo mataste ganaste gg";
                                                                            }
                                                                            else
                                                                            {
                                                                                cout << " lo dejaste a vivir, ahora esta arrestado ganaste";
                                                                            }



                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        cout << " te moriste ";

                                                                    }

                                                                }
                                                                else
                                                                {
                                                                    cout << " no lo afrontaste y seguste escondido";
                                                                    cout << "  te encontro y te moriste";

                                                                }
                                                            }

                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }




                                }
                                else
                                {
                                    cout << "intentaste atacarlo y te dejo herido";
                                    cout << " llamas a la ambulancia";
                                    cout << " estas en el hospital, recibes antencion medica";



                                }
                            }
                            else
                            {
                                cout << " lo esperaste y ves que esta corriendo hacia a ti";
                                cout << " que haces fredo?";
                                cout << " \n 1.escapas ";
                                cout << " \n 2. intentas hablar con el encapuchado";
                                cin >> opcion;
                                if (opcion == 1)
                                {
                                    cout << " escapaste ";
                                    cout << " y te sales de ese lugar ";
                                    cout << " no obtuviste nada ";

                                }
                                else
                                {
                                    cout << " al intentar hablar con el encapuchado te quiere golpear";
                                    cout << " que haces fredo?";
                                    cout << " hablar con el encapuchado";
                                    cout << " o pelear ";
                                    if (opcion == 1)
                                    {
                                        cout << " te moriste";
                                    }
                                    else
                                    {
                                        cout << " lo afrontaste, todo sale mal al punto de que te noquea y estas inconciente";
                                        cout << " te despiertas amarrado a una silla ";
                                        cout << "  ves al asesino y te dice te dije que se iba a poner peor";
                                        cout << " pero mientras tu estabas inconsciente el habia derramado gasolina en el lugar";
                                        cout << " el asesino se va ";
                                        cout << " tienes que escapar a tu alrededor tienes un cristal roto que haces fredo?";
                                        cout << " ir por el cristal o no ir por el cristal ";
                                        cin >> opcion;
                                        if (opcion == 1)
                                        {
                                            cout << " fuiste por el cristal ";
                                            cout << " te salvaste ";
                                        }
                                        else
                                        {
                                            cout << " te moriste ";

                                        }
                                    }
                                }
                            }

                    case 2:
                        cout << "seguiste investigando en el vecindario y ves que alguien te sigue ";
                        cout << " que vas a hacer fredo?";
                        cout << " \n1. esconderte\n";
                        cout << " \n2. esperar que va hacer el que te sigue\n";
                        cin >> opcion;

                        if (opcion == 1)
                        {

                            cout << " \nte escondiste y ves a la persona, y ves que esta encapuchado\n";
                            cout << " que haces fredo?";
                            cout << " \n1. dejas que se vaya y sigues investigando\n ";
                            cout << "\n2. intentas atacarlo\n ";
                            cin >> opcion;
                            if (opcion == 1)
                            {
                                cout << " dejaste que se fuera y siguiste investigando ";
                                system("pause ");
                                cout << " \n conseguiste info del asesino: \n";
                                cout << " \nnombre:\n " << asesino.nombre << endl;
                                cout << "\n edad: \n" << asesino.edad << endl;
                                cout << " vas a la comisaria a entregar la info";
                                cout << " llegas a la comisaria.............";
                                cout << " 1 para continuar ";
                                cin >> opcion;
                                if (opcion == 1)
                                {
                                    cout << " jefe te pide que entregues la info ";
                                    cout << " si? ";//es de a fuerzas entregarla
                                    if (opcion == 1)
                                    {
                                        cout << "  la entregaste con exito";

                                        cout << "\n te tiene otra mision para ti, un poco mas oscura\n";
                                        cout << " \nhubieron algunos disturbios en un zona y te pide que investigues en la noche\n";
                                        cin >> opcion;
                                        if (opcion == 1)
                                        {
                                            cout << "  \nnecesito que te equipes la linterna \n";
                                            cin >> opcion;
                                            if (opcion)
                                            {
                                                cout << " \nte quipaste la linterna\n " << endl;
                                                cout << "\n 1 para continuar\n ";
                                                cin >> opcion;
                                                if (opcion)
                                                {
                                                    cout << "\nllegaste a la zona, todo se ve muy turbio \n";
                                                    cout << " ves una puerta, desea entrar? ";
                                                    cin >> opcion;
                                                    if (opcion == 1)
                                                    {
                                                        cout << " entraste y ves muchos cadaveres ";
                                                        cout << " escuchas pasos y te encondes";
                                                        cout << " ves a la misma persona de antes ";
                                                        cout << " quieres afrontralo?";
                                                        if (opcion == 1)
                                                        {
                                                            cout << " lo afrontaste, todo sale mal al punto de que te noquea y estas inconciente";
                                                            cout << " te despiertas amarrado a una silla ";
                                                            cout << "  ves al asesino y te dice te dije que se iba a poner peor";
                                                            cout << " pero mientras tu estabas inconsciente el habia derramado gasolina en el lugar";
                                                            cout << " el asesino se va ";
                                                            cout << " tienes que escapar a tu alrededor tienes un cristal roto que haces fredo?";
                                                            cout << " ir por el cristal o no ir por el cristal ";
                                                            cin >> opcion;
                                                            if (opcion == 1)
                                                            {
                                                                cout << " fuiste por el cristal ";
                                                                cout << " te salvaste ";
                                                                cout << " estas enojado y golpeas la pared  ";
                                                                cout << " pow " << endl;
                                                                cout << " y formas un plan ";
                                                                cout << " llamas al ladron ";
                                                                cout << "  que le dirias? ";
                                                                cin >> decir;
                                                                cout << " okay muy sabio tu comentario: " << decir << endl;
                                                                cin >> opcion;
                                                                if (opcion == 1)
                                                                {
                                                                    cout << "se ofendio el asesino ";
                                                                    cout << " ahora lo veras en un lugar";
                                                                    cout << "1 para siguiente ";
                                                                    cin >> opcion;
                                                                    if (opcion == 1)
                                                                    {
                                                                        cout << " lo acorralaste ";
                                                                        cout << " ahora decidde si muere o vive";
                                                                    }
                                                                    if (opcion == 1)
                                                                    {
                                                                        cout << " lo mataste ganaste gg";
                                                                    }
                                                                    else
                                                                    {
                                                                        cout << " lo dejaste a vivir, ahora esta arrestado ganaste";
                                                                    }

                                                                }
                                                                else
                                                                {
                                                                    cout << " te moriste ";

                                                                }

                                                            }
                                                            else
                                                            {
                                                                cout << " no lo afrontaste y seguste escondido";
                                                                cout << "  te encontro y te moriste";


                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }





                                }
                                else
                                {
                                    cout << "intentaste atacarlo y te dejo herido";
                                    cout << " llamas a la ambulancia";
                                    cout << " llegas al hospital ";
                                    cout << " el asesino se infiltro";
                                    cout << " te mueres ";

                                }
                            }
                            else
                            {
                                cout << " lo esperaste y ves que esta corriendo hacia a ti";
                                cout << " que haces fredo?";
                                cout << " \n 1.escapas ";
                                cout << " \n 2. intentas hablar con el encapuchado";
                                cin >> opcion;
                                if (opcion == 1)
                                {
                                    cout << " escapaste ";
                                    cout << " y te sales de ese lugar ";
                                    cout << " no obtuviste nada ";

                                }
                                else
                                {
                                    cout << " al intentar hablar con el encapuchado te quiere golpear";
                                    cout << " que hace fredo?";

                                    cout << " hablar con el encapuchado";
                                    cout << " o pelear ";
                                    if (opcion == 1)
                                    {
                                        cout << " te moriste";
                                    }
                                    else
                                    {
                                        cout << " lo afrontaste, todo sale mal al punto de que te noquea y estas inconciente";
                                        cout << " te despiertas amarrado a una silla ";
                                        cout << "  ves al asesino y te dice te dije que se iba a poner peor";
                                        cout << " pero mientras tu estabas inconsciente el habia derramado gasolina en el lugar";
                                        cout << " el asesino se va ";
                                        cout << " tienes que escapar a tu alrededor tienes un cristal roto que haces fredo?";
                                        cout << " ir por el cristal o no ir por el cristal ";
                                        cin >> opcion;
                                        if (opcion == 1)
                                        {
                                            cout << " fuiste por el cristal ";
                                            cout << " te salvaste ";
                                        }
                                        else
                                        {
                                            cout << " te moriste ";

                                        }
                                    }
                                }


                            }





                        }

                        }
                    }
                }

            }
        }
    }





         
     
     
   







