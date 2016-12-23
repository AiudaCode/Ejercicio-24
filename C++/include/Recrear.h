#ifndef RECREAR_H
#define RECREAR_H
#include <iostream>

using namespace std;

class Recrear
{
    public:
        Recrear();
        virtual ~Recrear();

        //se definen los metodos publicos:
        string recrearPiramide();//recreaPiramide de tipo void tendra la funcion de dibujar la "media piramide"

        //se definen los metodos Setters y Getters del atributo "altura" y "bloque"
        void setAltura(int n);
        int getAltura();
    protected:

    private:
        //se define un atributo privado:
        int altura;//altura de tipo entero, sera la altura que digite el usuario
};

#endif // RECREAR_H
