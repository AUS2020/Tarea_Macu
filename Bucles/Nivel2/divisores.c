#include <stdio.h>

int main () {

  int numero;

  printf("Ingresa un numero\n");
  scanf("%d", &numero);

  printf("Los divisores de %d son:", numero);
  for (int i = 1; i <= numero; i++){
    
    if(numero%i == 0 ){
      printf(" %d", i);
    }
  }

  printf(".\n");
  return 0;

}
