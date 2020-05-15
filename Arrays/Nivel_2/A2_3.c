#include <stdio.h>
#include <stdlib.h>
#include<time.h>

 #define ANCHO 10

 void cargarArr(int arreglo[], int *par, int *impar);

 int main(){
   int A[ANCHO];
   int par,impar;

   srand(time(NULL));

   printf("\nArreglo A: \n");
   cargarArr(A, &par, &impar);
   printf("\n");

   if(par > impar){
     printf("El arreglo A tiene mas numeros pares [%d] que impares[%d]\n", par, impar);
   }else if(par == impar){
     printf("El arreglo A tiene la misma cantidad de numeros pares [%d] e impares [%d]\n", par, impar);
   }else{
     printf("El arreglo A tiene mas numeros impares [%d] que pares [%d]\n", impar, par);
   }
   
   return 0;

 }

 void cargarArr(int arreglo[], int *par, int *impar){
  *par = 0;
  *impar = 0;
  for(int i = 0; i < ANCHO; i++){
    arreglo[i] = rand()%101;
    printf("%2d ", arreglo[i]);

    if(arreglo[i]%2 == 0){
      (*par)++;
    }else{
      (*impar)++;
    }
  }
}