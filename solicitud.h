#ifndef SOLICITUD_H
#define SOLICITUD_H
#include <iostream>

class Solicitud
{
    private:
        std::string NombreAlm,NombreCarr,NombrePre;
        float Prom;

    public:
        Solicitud();
        float getProm();
        friend std::istream &operator >>(std::istream &,Solicitud &);
        friend std::ostream &operator <<(std::ostream &,Solicitud &);
        bool operator==(Solicitud&);
};

#endif // SOLICITUD_H
