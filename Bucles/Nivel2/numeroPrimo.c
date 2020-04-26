 
#include <stdio.h>

int esPrimo(int);

int main (void){

  int numero;

 printf("Ingrese un numero\n");

 scanf("%d", &numero);

 if(esPrimo(numero)){
   printf("El numero %d es primo\n", numero);
 }else{
    printf("El numero %d no es primo\n", numero);
 }

}

int esPrimo (int numero) {
  
  for(int i = 2; i< numero; i++){
    if(numero%i == 0){
      return 0;
    }
  }
  
  return 1;
}
