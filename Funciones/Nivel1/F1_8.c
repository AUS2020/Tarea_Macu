#include <stdio.h>
#define Maximo 10
#define Minimo 0
void pedirValor(int *valor, int minimo, int maximo);
void imprimirPiramide(int valor);

int main(void){
  int numero;
  pedirValor(&numero, Maximo, Minimo);
  imprimirPiramide(numero);
}

void imprimirPiramide(int valor){
  for(int i =1; i<=valor; i++){
    for(int j = 1; j<= (valor - i); j++){
      printf("   ");
    }
    for(int j = 1; j<i; j++){
      printf("%3d", j);
    }

    for(int j = i; j>= 1; j--){
      printf("%3d", j);
    }

    printf("\n");
  }
}

void pedirValor(int *valor, int maximo, int minimo ){
  while(1){
    printf("Ingrese un valor: \n");
    scanf("%d", valor);
    if(*valor >= minimo && *valor <= maximo){
      break;
    }else{
      printf("Debe ingresar un numero menor a %d\n", maximo);
    }
  }
}