#include <stdio.h>

int main (){
  int i;
  int suma = 0;
  for(i = 0; i <100; i++){
    suma+=(i+=1);
  }

  printf("La suma de todos los numeros impares es: %d\n", suma);

  return 0;

}
