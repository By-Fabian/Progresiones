//
// Created by fabia on 9/11/2019.
//

#include "claseArimeticProgresion.h"

claseArimeticProgresion::claseArimeticProgresion(t_numero incre) :
    claseProgresion(0),pri_incremento{incre}
    {}

t_numero claseArimeticProgresion::siguiente_valor() {
    t_numero siguiente=pro_actual+pri_incremento;
    pro_actual=siguiente;
    return siguiente;
}
