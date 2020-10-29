#include<stdio.h>
#include<cstdlib>
#include "enterosLista.h"

int main(){
  
  Enteros *listaEnteros = (struct Enteros *) malloc(sizeof(struct Enteros));
  listaEnteros->sig = NULL;
  agrNodo(listaEnteros, 8);
  imprimirLista(listaEnteros);
  agrNodo(listaEnteros, 16);
  agrNodo(listaEnteros, 12);
  imprimirLista(listaEnteros);
  int valor = 11;
  printf("Encontrado %d ? %d \n", valor, esEnLista(listaEnteros, valor));
  valor = 8;
  printf("Encontrado %d ? %d \n", valor, esEnLista(listaEnteros, valor));
  eliminarNodo(listaEnteros, 16);
  imprimirLista(listaEnteros);
  eliminarNodo(listaEnteros, 8);
  imprimirLista(listaEnteros);
  eliminarNodo(listaEnteros, 12);
  imprimirLista(listaEnteros);
  eliminarNodo(listaEnteros, 16);
  imprimirLista(listaEnteros);

  printf("Another example \n");

  Enteros *listaDecana = (struct Enteros *) malloc(sizeof(struct Enteros));
  for(int i=0; i<100; i++)
    agrNodo(listaDecana, i+1);
  imprimirLista(listaDecana);
  int dividendo = 100;
  Enteros *listaDivisores = divisores(listaDecana, dividendo);
  imprimirLista(listaDivisores);

  listaCoprimos = coprimos(listaDecana);
  printf("Resultados prueba coprimo \n");
  imprimirLista(listaCoprimos);

  return 0;
}

