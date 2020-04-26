#include <stdio.h>


int main(){
  int primerNumero;
  int segundoNumero;
  int resultado = 0;

  printf("Ingrese dos numero por favor\n");
  scanf("%d\n%d", &primerNumero, &segundoNumero);

  if(segundoNumero > primerNumero){

   for(int i = primerNumero; i<= segundoNumero; i++){
    resultado += i;
   }

   printf("el resultado es %d\n", resultado);

  }else{

  printf("El segundo numero debe ser mayor que el primer numero\n");

  }

  return 0;

}





