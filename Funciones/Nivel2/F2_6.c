// Implementar un programa que permita ordenar un array de 10 enteros de forma ascendente siguiendo algún algoritmo de ordenamiento.

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define DIMENSION 10

void cargarArr(int []);
void imprimirArr(int []);
void ordenarAscend(int []);

int main(void){
  int arr[DIMENSION];

  srand(time(NULL));

  cargarArr(arr);

  printf("Arreglo desordenado: \n");
  imprimirArr(arr);

  ordenarAscend(arr);
  printf("\n");

  printf("Arreglo ordenado de forma ascendente: \n");
  imprimirArr(arr);

  return 0;

}

//ordena el arreglo de forma ascendente
void ordenarAscend(int arreglo[]){
  int aux;
  for(int i=0; i < DIMENSION - 1; i++){
    for(int j=0; j < DIMENSION - i - 1; j++){
      if(arreglo[j+1] < arreglo[j]){
        aux = arreglo[j+1];
        arreglo[j+1]=arreglo[j];
        arreglo[j]=aux;
      }
    }
  }
}


//cargamos el arreglo de forma automatica
void cargarArr(int arreglo[]){
  for(int i = 0; i < DIMENSION; i++){
    arreglo[i] = rand()%101;
  }
}

//imprime el arreglo
void imprimirArr(int arreglo[]){
  for(int i = 0; i < DIMENSION; i++){
    printf("%d ", arreglo[i]);
  }
  printf("\n");
}

