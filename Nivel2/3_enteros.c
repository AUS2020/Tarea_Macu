#include <stdio.h>

int main (void){
  int numero1,
      numero2,
      numero3,
      resultado = 0;

  printf("ingrese 3 numeros\n");
  scanf("%i %i %i",&numero1, &numero2, &numero3 );

  if(numero1 < numero3){
    for(int i = 0; ((resultado = numero1 + i*numero2)<= numero3); i++) {
      printf("%i ",resultado);
    }

    printf("\n");
  }

}
