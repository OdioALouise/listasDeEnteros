#include "enterosLista.h"

void agrNodo(Enteros *listaEnteros, int n){
  Enteros *nvoNodo = (struct Enteros *) malloc(sizeof(struct Enteros));
  nvoNodo->n = n;
  nvoNodo->sig = NULL;

  if( listaEnteros->sig == NULL ){
    printf("Esta vacio agregaremos un nuevo elemento %d \n", n);
    listaEnteros->sig = nvoNodo;
  }else{
    printf("Agregamos un nuevo elemento %d \n", n);
    nvoNodo->sig = listaEnteros->sig;
    listaEnteros->sig = nvoNodo;
  }

  return;
}


void imprimirLista(Enteros *listaEnteros){
  Enteros *cabezal;
  int items = 1;
  cabezal = listaEnteros;
  printf("Comienzo de impresion \n");
  while( (cabezal = cabezal->sig)!= NULL ){
    printf("\t Item nro %d: %d \n", items++, cabezal->n);
  }
  printf("Fin de impresion \n");
  return;
}


bool esEnLista(Enteros *listaEnteros, int n){
  Enteros *cabezal;
  cabezal = listaEnteros;
  while( (cabezal = cabezal->sig) != NULL){
    if( cabezal->n == n)
      return true;
  }
  return false;
}

void eliminarNodo(Enteros *listaEnteros, int n){
  if(esEnLista(listaEnteros, n)){
    Enteros *cabezal;
    Enteros *anterior;
    cabezal = listaEnteros;
    anterior = listaEnteros;
    while( (cabezal = cabezal->sig) != NULL ){
      if(cabezal->n == n){
        anterior->sig = cabezal->sig;
        free(cabezal);
        return;
      }
      anterior = cabezal;
    }
  }
  return;
}


Enteros* divisores(Enteros *listaEnteros, int n){
  Enteros *lDiv = (struct Enteros *) malloc(sizeof(struct Enteros));
  return lDiv;
}

Enteros* divisoresComunes(Enteros *listaEnteros, int n, int m){
  Enteros *comDiv = (struct Enteros *) malloc(sizeof(struct Enteros));
  return comDiv;
}

int maximoComunDivisor(Enteros *listaEnteros, int n, int m){
  int mcd = 0;
  return mcd;
}

int minimoComunMultiplo(Enteros *listaEnteros, int n, int m){
  int mcm = 0;
  return mcm;
}

Enteros* coprimos(Enteros *listaEnteros, int n){
  Enteros *lCop = (struct Enteros *) malloc(sizeof(struct Enteros));
  return lCop;
}

