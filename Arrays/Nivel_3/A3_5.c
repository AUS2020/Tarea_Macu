#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ANCHO 20

int main (void){

  int A[ANCHO];
  int e;
  int cuenta = 0;
  srand(time(NULL));

  //Pedir e
  printf("Ingrese un numero: ");
  scanf("%d", &e);
  
  //cargar los numeros en el array
  for(int i = 0; i < ANCHO; i++){
    A[i] = rand()%101;
    if(A[i] == e) {
      cuenta++;
    }
  }

  printf("\n");
  
  //imprimir el array
  for(int i = 0; i < ANCHO; i++){
    printf("%3d", A[i]);
  }
  printf("\n");

  if(cuenta > 0){
    printf(" El numero %d esta en el arreglo A y aparece %d veces\n", e, cuenta);
  }else{
    printf(" El numero %d no aparece en el arreglo A\n", e, cuenta);
  }

  return 0;

}


