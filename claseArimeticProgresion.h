//
// Created by fabia on 9/11/2019.
//

#ifndef PROGRESIONES_CLASEARIMETICPROGRESION_H
#define PROGRESIONES_CLASEARIMETICPROGRESION_H

#include "miscelanius.h"
#include "claseProgresion.h"

class claseArimeticProgresion: public claseProgresion {
private:
    t_numero pri_incremento;
public:
    explicit claseArimeticProgresion(t_numero incremento);
    t_numero siguiente_valor() override ;
};

#endif //PROGRESIONES_CLASEARIMETICPROGRESION_H
