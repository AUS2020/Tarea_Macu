#include <stdio.h>


int main (){
  float numero;
  int entero;

  printf("Ingrese un numero entre 1 y 15\n");
  scanf("%f", &numero);

  entero = (int) numero;

  if(numero > 0 && numero <=15 && !(numero - entero)){

    for(int i = 0; i < numero; i++ ){
      printf("*");
    }

    printf("\n");

  }else{
    printf("el numero debe ser entero y debe estar entre el 1 y 15 incluidos\n");


  }


  return 0;

}
