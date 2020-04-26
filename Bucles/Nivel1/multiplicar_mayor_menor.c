#include <stdio.h>


int main(){
  int primerNumero;
  int segundoNumero;
  long resultado = 1;

  printf("Ingrese dos numeros por favor\n");
  scanf("%d\n%d", &primerNumero, &segundoNumero);

  if(segundoNumero > primerNumero){

   for(int i = primerNumero; i<= segundoNumero; i++){
    resultado *= i;
   }

   printf("el resultado es %ld\n", resultado);

  }else{

  printf("El segundo numero debe ser mayor que el primer numero\n");

  }

  return 0;

}





