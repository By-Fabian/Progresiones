//
// Created by fabia on 9/11/2019.
//

#include "miscelanius.h"
#include "claseFibonacciProgresion.h"

claseFibonacciProgresion::claseFibonacciProgresion(t_numero pre) :
    claseProgresion(1) ,pri_anterior{pre}
    {}

t_numero claseFibonacciProgresion::siguiente_valor() {
    t_numero siguiente=pri_anterior+pro_actual;
    pri_anterior=pro_actual;
    pro_actual=siguiente;
    return siguiente;
}
