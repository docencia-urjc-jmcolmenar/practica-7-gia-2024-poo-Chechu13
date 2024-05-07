//  
// Created by chech on 26/04/2024.
//

#ifndef PRACTICA_7_GIA_2024_POO_CHECHU13_CUADRADO_H
#define PRACTICA_7_GIA_2024_POO_CHECHU13_CUADRADO_H
#include "Caso_base.h"

class Cuadrado : public Caso_base{
public:
    Cuadrado(int l) : Caso_base(l,4){}
    float area();
};


#endif //PRACTICA_7_GIA_2024_POO_CHECHU13_CUADRADO_H
