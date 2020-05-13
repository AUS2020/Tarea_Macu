#include <stdio.h>
#define ANCHO 10

void cargarArr(int arreglo[], char letra);

int main () {
  int M[ANCHO];
  int N[ANCHO];
  int contador = 0;
  int suma_M = 0;
  int suma_N = 0;

  cargarArr(M, 'M');
  cargarArr(N, 'N');

  for(int i = 0; i < ANCHO; i++){
    if(M[i] == N[i]){
      contador++;
    }
    suma_M+=M[i];
    suma_N+=N[i];
  }

  if(contador == 10){
    printf("Los arreglos son iguales\n");
  }else if(suma_N == suma_M){
    printf("Los arreglos son similares\n");
  }else{
    printf("Los arreglos son diferentes\n");
  }

  return 0;


}

void cargarArr(int arreglo[], char letra){
  int valor;


  for(int i = 0; i < ANCHO; i++){
    printf("Ingrese un valor para el arreglo %c entre [0-50] %i/%i\n ", letra, i+1, ANCHO);
    scanf("%d", &valor);

    if(valor >= 0 && valor <= 50){
      arreglo[i] = valor;
    }else{
      printf("Ingrese un numero de acuerdo al rango indicado, vuelva a intentarlo \n");
      i--;
    }
  }

  printf("\n");
}
