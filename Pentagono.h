//
// Created by chech on 26/04/2024.
//

#ifndef PRACTICA_7_GIA_2024_POO_CHECHU13_PENTAGONO_H
#define PRACTICA_7_GIA_2024_POO_CHECHU13_PENTAGONO_H
#include "Caso_base.h"

class Pentagono : public Caso_base{
public:
    Pentagono(float l) : Caso_base(l,5){}
    float area();
};


#endif //PRACTICA_7_GIA_2024_POO_CHECHU13_PENTAGONO_H
