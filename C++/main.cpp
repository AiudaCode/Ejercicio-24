#include <iostream>
#include "Recrear.h"

using namespace std;

int main()
{
    //Se crea un objeto de la clase Calcular (Instanciaciación)
    Recrear *obj = new Recrear();
    //se define una variable de tipo entero llamada "alt"
    int alt;
    //con el ciclo do-while pediremos la altura
    do//haga esto:
    {
        cout << "Altura: ";//se pide la altura
        cin >> alt;//se guarda la altura en la variable "alt"
        obj->setAltura(alt);//se llama al metodo setAltura para encapsular a la variable "alt"
    }
    while(alt < 0 || alt > 23);//el ciclo repetira esas instrucciones si la "alt" es menor a 0 o mayor a 23.

    cout << obj->recrearPiramide() << endl;// mostramos la media piramide
    return 0;
}
