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


Enteros *divisores(int n){
  Enteros *lDiv = (struct Enteros *) malloc(sizeof(struct Enteros));
  
  if(n == 12){
    agrNodo(lDiv, 1);
    agrNodo(lDiv, 2);
    agrNodo(lDiv, 3);
    agrNodo(lDiv, 4);
    agrNodo(lDiv, 6);
    agrNodo(lDiv, 12);       
   }
  
  if(n == 20){
    agrNodo(lDiv, 1);
    agrNodo(lDiv, 5);
    agrNodo(lDiv, 20);
  }
  
  return lDiv;
}

Enteros *divisoresComunes(int n, int m){
  Enteros *listm = (struct Enteros *) malloc(sizeof(struct Enteros));
  Enteros *listn = (struct Enteros *) malloc(sizeof(struct Enteros));

  listm = divisores (m);
  listn = divisores (n);

  Enteros *listDC = (struct Enteros *) malloc(sizeof(struct Enteros));

  Enteros *cabezal;
  cabezal = listm;
  while( (cabezal = cabezal->sig)!= NULL ){

    Enteros *cabezal2;
    cabezal2 = listn;
    while( (cabezal2 = cabezal2->sig)!= NULL ){
      if (cabezal->n == cabezal2->n){
          //Agregar cabezal.n a la lista listDC porque esta en ambas lista de divisores usando la funcion agrNodo(una lista, el valor a agregarle a esa lista) 
        agrNodo(listDC,cabezal->n);
   
        
      }

    }

  }
return listDC;
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

