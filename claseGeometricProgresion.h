//
// Created by fabia on 9/11/2019.
//

#ifndef PROGRESIONES_CLASEGEOMETRICPROGRESION_H
#define PROGRESIONES_CLASEGEOMETRICPROGRESION_H

#include "miscelanius.h"
#include "claseProgresion.h"

class claseGeometricProgresion: public claseProgresion {
private:
    t_numero pri_base;
public:
    claseGeometricProgresion(t_numero bas);
    t_numero siguiente_valor() override ;
};


#endif //PROGRESIONES_CLASEGEOMETRICPROGRESION_H
