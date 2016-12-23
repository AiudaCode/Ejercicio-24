#include "Recrear.h"
#include <iostream>

using namespace std;

Recrear::Recrear()
{
    altura = 0;
}

Recrear::~Recrear()
{
    //dtor
}

//Implemetacion del metodo para recrear la "media piramide"
string Recrear::recrearPiramide()
{
    string bloque = "";
    //recorremos con un ciclo for desde 0 hasta la altura que el usuario digito
    for(int i = 0; i < altura; i++)
    {
        //se recorre con un ciclo for hasta j sea menor (que la altura del usuario menos el valor de i menos i)
        for(int j = 0; j < altura-i-1; j++)
        {
            //se acumulara con un espacio en blanco la variable "bloque"
            bloque = bloque + " ";
            //se acumulan con espacios para alinear la "media piramide" hacia la derecha....
        }
        //se recorre con un ciclo for hasta k sea menor (que el valor de i mas 2)
        for(int k = 0; k < i+2; k++)
        {
            //se acumulara con un "#" (bloque) la variable "bloque"
            bloque = bloque + "#";
        }
        //despues de recorrer los dos ciclos:
        bloque = bloque + "\n";//se dara un salto de linea... en la variable bloque
    }
    return bloque;
}

//implementacion del metodos Setters y Getters del atributo altura
void Recrear::setAltura(int n)
{
    altura = n;
}

int Recrear::getAltura()
{
    return altura;
}
