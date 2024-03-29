//
// Created by Alonso Chaves  on 2019-09-16.
//

#ifndef LAB_6_LISTAS_ENLAZADAS_NODO_H
#define LAB_6_LISTAS_ENLAZADAS_NODO_H
#include <ostream>
#include "Vehiculo.h"

class Nodo {
    Vehiculo vehiculo;
    Nodo *siguiente;

public:
    Nodo();

    Nodo(const Vehiculo &vehiculo, Nodo *siguiente);

    virtual ~Nodo();

    const Vehiculo &getVehiculo();

    void setVehiculo(const Vehiculo &vehiculo);

    Nodo *getSiguiente();

    void setSiguiente(Nodo *_siguiente);

    std::string toString();

};


#endif //LAB_6_LISTAS_ENLAZADAS_NODO_H