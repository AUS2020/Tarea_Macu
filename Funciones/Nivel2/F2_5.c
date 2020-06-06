// Crear una función que al recibir un array de 10 enteros determine si está ordenado de manera ascendente.

//compilar desde consola => gcc random.c F2_5.c -o  f2_5

#include <stdio.h>
//mi libreria
#include "./random.h"

#define DIMENSION 10

void cargarArr(int[]);
void esAscendente(int[]);
void imprimirArr(int[]);

int main(void){
  //semilla
  randomInit();

  int arr[DIMENSION];
  //para probar si es ascendente
  // int arr[DIMENSION] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  cargarArr(arr);
  printf("\n");

  imprimirArr(arr);
  printf("\n");

  esAscendente(arr);
  printf("\n");

  return 0;

}

//cargamos el arreglo de forma automatica
void cargarArr(int arreglo[]){
  for(int i = 0; i < DIMENSION; i++){
    arreglo[i] = Random(100);
  }
}

//funcion que verifica si el arreglo esta ordenado de forma ascendente

void esAscendente(int arreglo[]){
  for(int i = 0; i < DIMENSION - 1; i++){
    // si existe un numero A seguido de un numero B 
    // tal que A se igual o mayor a B entonces no es ascendente
    if(arreglo[i] >= arreglo[i+1]){
      printf("El arreglo no esta ordenado de forma ascendente.");

      return;
    }
  }
  printf("El arreglo esta ordenado de forma ascendente."); 
}


//imprime el arreglo
void imprimirArr(int arr[]){
  for(int i = 0; i < DIMENSION; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}



