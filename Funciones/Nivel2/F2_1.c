#include <stdio.h>

int validPrimo(int numero);

int main(void){
  for(int i = 1; i<=500; i++){
    if(validPrimo(i)){
      printf("El numero %d es primo\n", i);
    }else{
      printf("El numero %d no es primo\n", i);
    }
  }
  return 0;
}

int validPrimo(int numero){
  for(int i = 2; i < numero; i++){
    if(numero%i == 0){
      return 0;
    }
  }
  return 1;
}