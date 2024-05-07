//
// Created by chech on 26/04/2024.
//

#include "Hexagono.h"

float Hexagono :: area() {
    float apotema;
    apotema = lado / 1.15;
    return (perimetro() * apotema)/2;
}