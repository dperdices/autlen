#ifndef _AFND_H
#define _AFND_H

#include <stdio.h>
#include "alfabeto.h"
#include "relacion.h"
#include "ftrans.h"
#include "estado.h"

#define _AFND_format    "%s={\n"\
                            "\tnum_simbolos = %d\n\n"\
                            "\tA={%s}\n\n"\
                            "\tnum_estados = %d\n\n"\
                            "\tQ={%s}\n\n"\
                            "\tRL%s={\n"\
                                "%s"\
                            "\t}\n\n\n"\
                            "\tFuncion de Transición = {\n"\
                                "%s"\
                            "\t}\n"\
                        "}\n"

struct _AFND;
typedef struct _AFND AFND;

AFND * AFNDNuevo(char * nombre, int num_estados, int num_simbolos);

char * AFNDObtieneNombre(AFND * p_afnd);

Alfabeto * AFNDObtieneAlfabeto(AFND * p_afnd);

Relacion * AFNDObtieneRelacion(AFND * p_afnd);

Ftrans * AFNDObtieneTransicion(AFND * p_afnd);

Estado ** AFNDObtieneEstados(AFND * p_afnd, int * num_estados);

void AFNDElimina(AFND * p_afnd);

void AFNDImprime(FILE * fd, AFND* p_afnd);

AFND * AFNDInsertaEstado(AFND * p_afnd, char * nombre, int tipo);

AFND * AFNDInsertaSimbolo(AFND * p_afnd, char * simbolo);

AFND * AFNDInsertaTransicion(AFND * p_afnd, char * nombre_estado_i, char * nombre_simbolo_entrada, char * nombre_estado_f);

AFND * AFNDInsertaLTransicion(AFND * p_afnd, char * nombre_estado_i, char * nombre_estado_f);

AFND * AFNDCierraLTransicion(AFND * p_afnd);

AFND * AFNDInsertaLetra(AFND * p_afnd, char * letra);

void AFNDImprimeConjuntoEstadosActual(FILE * fd, AFND * p_afnd);

AFND * AFNDInicializaCadenaActual(AFND * p_afnd);

void AFNDImprimeCadenaActual(FILE *fd, AFND * p_afnd);

AFND * AFNDInicializaEstado(AFND * p_afnd);

void AFNDProcesaEntrada(FILE * fd, AFND * p_afnd);

void AFNDTransita(AFND * p_afnd);

void AFNDADot(AFND * p_afnd);

#endif
