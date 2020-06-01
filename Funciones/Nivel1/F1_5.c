#include <stdio.h>
int pedirValor(int *valor);
void divisores(int valor);

int main(void){
  int numero;
  pedirValor(&numero);

  divisores(numero);
  
  return 0;
}

int pedirValor(int *valor){
  printf("Ingrese un valor: \n");
  scanf("%d", valor);
}

void divisores(int valor){
  printf("Los divisores de %d son:", valor);
  for (int i = 1; i <= valor; i++){
    
    if(valor%i == 0 ){
      printf(" %d", i);
    }
  }

   printf(".\n");
}