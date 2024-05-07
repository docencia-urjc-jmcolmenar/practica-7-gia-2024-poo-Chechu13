//
// Created by chech on 26/04/2024.
//

#ifndef PRACTICA_7_GIA_2024_POO_CHECHU13_CASO_BASE_H
#define PRACTICA_7_GIA_2024_POO_CHECHU13_CASO_BASE_H


class Caso_base {
protected:
float lado;
int numlados;
public:
    Caso_base(float l, int nl) : lado(l), numlados(nl){};
    double perimetro();
};

#endif //PRACTICA_7_GIA_2024_POO_CHECHU13_CASO_BASE_H