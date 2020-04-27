#include <stdio.h>


int main (){
  int numeroAnterior = 0;
  int numero = 1;
  int aux;

  for(int i = 0; i<=25; i++){
    printf("%d ", numeroAnterior );
    aux = numero;
    numero += numeroAnterior;
    numeroAnterior = aux;
  }

  printf("\n");

  return 0;
}
