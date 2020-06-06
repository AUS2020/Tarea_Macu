//Crear un programa que permita utilizando funciones: cargar un array A de 20 enteros con números enteros aleatorios entre 1 y 100, mostrarlo por pantalla, calcular la suma de todas sus componentes y el promedio.

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define DIMENSION 20

void cargarArr(int []);
void imprimirArr(int []);
int  sumarElement(int[]);

int main(void){

  srand(time(NULL));

  int A[DIMENSION];
  int promedio;
  int suma; 

  cargarArr(A);
  printf("\n");

  imprimirArr(A);
  printf("\n");

  suma = sumarElement(A);

  //calculamos el promedio
  promedio = suma/DIMENSION;

  printf("El promedio del arreglo es : %d \n", promedio);

  return 0;

}

//cargamos el arreglo de forma automatica
void cargarArr(int arreglo[]){
  for(int i = 0; i < DIMENSION; i++){
    arreglo[i] = rand()%101;
  }
}

//imprime el arreglo 
void imprimirArr(int arr[]){
  for(int i = 0; i < DIMENSION; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

}

//suma los elementos de mi arreglo
int sumarElement(int arreglo[]){
  int suma = 0;

  for(int i = 0; i < DIMENSION; i++){
    suma += arreglo[i];
  }

  return suma;
}


