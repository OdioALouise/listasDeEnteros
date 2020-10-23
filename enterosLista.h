#ifndef ENTEROS_H
#define ENTEROS_H

#include<cstdlib>
#include<stdio.h>

struct Enteros{
  int n;
  Enteros *sig;
};

void agrNodo(Enteros *listaEnteros, int n);
void imprimirLista(Enteros *listaEnteros);
bool esEnLista(Enteros *listaEnteros, int n);
void eliminarNodo(Enteros *listaEnteros, int n);
Enteros* divisores(Enteros *listaEnteros, int n);
Enteros* divisoresComunes(Enteros *listaEnteros, int n, int m);
int maximoComunDivisor(Enteros *listaEnteros, int n, int m);
int minimoComunMultiplo(Enteros *listaEnteros, int n, int m);
Enteros* coprimos(Enteros *listaEnteros, int n);

#endif
