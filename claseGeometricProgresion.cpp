//
// Created by fabia on 9/11/2019.
//

#include "miscelanius.h"
#include "claseGeometricProgresion.h"

claseGeometricProgresion::claseGeometricProgresion(t_numero bas) :
    claseProgresion(1),pri_base{bas}
    {}

t_numero claseGeometricProgresion::siguiente_valor() {
    t_numero siguiente=pro_actual*pri_base;
    pro_actual=siguiente;
    return siguiente;
}
