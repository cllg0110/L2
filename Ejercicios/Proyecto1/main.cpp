#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");
    int opcion;

    cout<<"********* GAME CLLG ***********"<<endl;
    cout<<"******* MENU DE JUEGOS ********"<<endl;
    cout<<"*******************************"<<endl;
    
    cout<<endl;
    cout<<"--Seleccionar un Juego--"<<endl;
    cout<<"1 - StarShip"<<endl;
    cout<<"2 - Snake"<<endl;

    cout<<endl;
    cout<<"-Ingrese un numero del menu para seleccionar un juego: "; 
    cin>>opcion;
    switch (opcion)
    {
        
    case 1: 
            system("cls");
            starShip();
        break;
    
    case 2:
            system("cls");
            snake();
        break;

    default: 
            cout<<"¡¡ Sigue Intentando !! ";
        break;
    }


    return 0;
}