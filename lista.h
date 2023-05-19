#ifndef LISTA_H
#define LISTA_H
#include"Solicitud.h"
#define TAM 50

class Lista
{
    private:
        Solicitud dato[TAM];
        int ult;

    public:
        Lista();
        bool Vacia()const;
        bool Llena()const;
        bool Insertar(Solicitud&);
        void Insercion();
        int Buscar(Solicitud&);
};

#endif // LISTA_H
