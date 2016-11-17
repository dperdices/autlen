#ifndef _AFND10_H
#define _AFND10_H

#include <stdio.h>
#include "afnd.h"

AFND * AFND1ODeSimbolo( char * simbolo);

AFND * AFND1ODeLambda();

AFND * AFND1ODeVacio();

AFND * AFNDAAFND1O(AFND * p_afnd);

AFND * AFND1OUne(AFND * p_afnd1O_1, AFND * p_afnd1O_2);

AFND * AFND1OConcatena(AFND * p_afnd_origen1, AFND * p_afnd_origen2);

AFND * AFND1OEstrella(AFND * p_afnd_origen);

#endif
