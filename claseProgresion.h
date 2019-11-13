//
// Created by fabia on 9/11/2019.
//

#ifndef PROGRESIONES_CLASEPROGRESION_H
#define PROGRESIONES_CLASEPROGRESION_H

#include "miscelanius.h"

class claseProgresion {
protected:
    t_numero pro_first;
    t_numero pro_actual;
public:
    explicit claseProgresion(t_numero first);
    t_numero primer_valor();
    virtual t_numero siguiente_valor()=0;
    void imprimir_progresion();
};

#endif //PROGRESIONES_CLASEPROGRESION_H
