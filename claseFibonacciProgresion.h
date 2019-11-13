//
// Created by fabia on 9/11/2019.
//

#ifndef PROGRESIONES_CLASEFIBONACCIPROGRESION_H
#define PROGRESIONES_CLASEFIBONACCIPROGRESION_H

#include "miscelanius.h"
#include "claseProgresion.h"

class claseFibonacciProgresion: public claseProgresion {
private:
    t_numero pri_anterior;
public:
    explicit claseFibonacciProgresion(t_numero pre);
    t_numero siguiente_valor() override ;

};


#endif //PROGRESIONES_CLASEFIBONACCIPROGRESION_H
