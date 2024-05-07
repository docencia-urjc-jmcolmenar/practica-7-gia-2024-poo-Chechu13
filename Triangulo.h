//
// Created by chech on 26/04/2024.
//

#ifndef PRACTICA_7_GIA_2024_POO_CHECHU13_TRIANGULO_H
#define PRACTICA_7_GIA_2024_POO_CHECHU13_TRIANGULO_H
#include "Caso_base.h"

class Triangulo : public Caso_base{
public:
    Triangulo(float l) : Caso_base(l,3) {};
    float area();
};


#endif //PRACTICA_7_GIA_2024_POO_CHECHU13_TRIANGULO_H
