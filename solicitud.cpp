#include "Solicitud.h"

Solicitud::Solicitud()
{

}

float Solicitud::getProm()
{
    return Prom;
}

std::istream & operator >>(std::istream &O, Solicitud &X)
{
    std::cout<<"Nombre del alumno:-> ";
    O>>X.NombreAlm;
    std::cout<<"Nombre de la carrera a cursar:-> ";
    O>>X.NombreCarr;
    std::cout<<"Nombre de la preparatoria procedente:-> ";
    O>>X.NombrePre;
    std::cout<<"Promedio general:-> ";
    O>>X.Prom;

    return O;
}

std::ostream &operator <<(std::ostream &O, Solicitud &X)
{
    O<<"Nombre del alumno:-> "<<X.NombreAlm<<std::endl;
    O<<"Nombre de la carrera a cursar:-> "<<X.NombreCarr<<std::endl;
    O<<"Nombre de la preparatoria de procedencia:-> "<<X.NombrePre<<std::endl;
    O<<"Promedio general: "<<X.Prom<<std::endl;

    return O;
}

bool Solicitud::operator==(Solicitud& c)
{
    if(c.NombreAlm==NombreAlm && c.NombreCarr==NombreCarr && c.NombrePre==NombrePre&& c.Prom==Prom){
        return true;
    }
    return false;
}
