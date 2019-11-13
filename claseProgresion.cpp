//
// Created by fabia on 9/11/2019.
//

#include "claseProgresion.h"

claseProgresion::claseProgresion(t_numero f) :
    pro_first{f},pro_actual{f}
    {}

t_numero claseProgresion::primer_valor() {
    return pro_first;
}

void claseProgresion::imprimir_progresion() {
    cout<<pro_actual;
}




