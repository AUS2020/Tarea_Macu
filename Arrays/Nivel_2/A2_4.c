#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define ANCHO 10

int main (){
  int A [ANCHO];
  int aux;
  srand(time(NULL));

  for (int i = 0; i < ANCHO; i++){
     A[i] = rand()%51;
    printf("%d ", A[i]);
  }

  printf("\n");

  for(int i = 0; i < (ANCHO-1)/2; i++){
    aux=A[i];
    A[i] = A[ANCHO-i-1];
    A[ANCHO-i-1] = aux; 
  }
  
  for (int i = 0; i < ANCHO; i++){
    printf("%d ", A[i]);
  }

  printf("\n");

  return 0;

}

