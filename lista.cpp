
#include "Lista.h"

Lista::Lista()
{
    ult=-1;
}

bool Lista::Vacia()const
{
    return ult==-1;
}

bool Lista::Llena()const
{
    return ult==TAM-1;
}

bool Lista::Insertar(Solicitud& Dato)
{
    if(!Llena()){
        dato[ult+1]=Dato;
        ult++;
        return true;
    }else{
        std::cout<<"\nError!, la lista esta llena."<<std::endl;
    }
}

void Lista::Insercion()
{
    Solicitud aux;
    int i=1,j;
    while(i<=ult){
        aux=dato[i];
        j=i;
        while(j>0 && aux.getProm()>dato[j-1].getProm()){
            dato[j]=dato[j-1];
            j--;
        }
        if(i!=j){
            dato[j]=aux;
        }
        i++;
    }
}

int Lista::Buscar(Solicitud& Dato)
{
    Insercion();
    int i=0,j=ult,medio;
    while(i<=j){
        medio=(i+j)/2;
        if(dato[medio]==Dato){
            return medio;
            break;
        }
        else if(Dato.getProm()>dato[medio].getProm()){
            j=medio-1;
        }else{
            i=medio+1;
        }
    }
    return -1;
}
