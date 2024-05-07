//
// Created by chech on 26/04/2024.
//

#ifndef PRACTICA_7_GIA_2024_POO_CHECHU13_HEXAGONO_H
#define PRACTICA_7_GIA_2024_POO_CHECHU13_HEXAGONO_H
#include "Caso_base.h"

class Hexagono : public Caso_base{
public:
    Hexagono(float l) : Caso_base(l,6){}
    float area();
};


#endif //PRACTICA_7_GIA_2024_POO_CHECHU13_HEXAGONO_H
