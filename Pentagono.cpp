//
// Created by chech on 26/04/2024.
//

#include "Pentagono.h"

float Pentagono :: area() {
    float apotema;
    apotema = lado / 1.45;
    return (perimetro() * apotema)/2;
}