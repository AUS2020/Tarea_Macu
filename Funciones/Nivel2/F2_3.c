//invertir un arreglo
#include <stdio.h>
#define DIMENSION 10

//prototipo
void pedirCargarArr(int []);
void imprimirArr(int []);
void invertirArr(int []);

int main(void){
  int arreglo[DIMENSION];

  pedirCargarArr(arreglo);
  printf("\n");

  printf("Arreglo original\n");
  imprimirArr(arreglo);
  printf("\n");

  printf("Arreglo invertido\n");
  invertirArr(arreglo);

  imprimirArr(arreglo);
  printf("\n");

  return 0;
  
}

//funcion pedir un valor, N veces
void pedirCargarArr(int arr[]){
  for(int i = 0; i < DIMENSION; i++){
    printf("Ingrese un valor %d/%d : ", i+1, DIMENSION);
    scanf("%d", &arr[i]);
  }
}

//imprime el arreglo 
void imprimirArr(int arr[]){
  for(int i = 0; i < DIMENSION; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

}

// funcion invertir arreglo
void invertirArr(int arr[]){
  int aux;
  for(int i = 0; i < (DIMENSION/2); i++){
    aux = arr[i];
    arr[i] = arr[DIMENSION - (i + 1)];
    arr[DIMENSION - (i + 1)] = aux;
  }
}

