#include <stdio.h>
#include <stdlib.h>
#include<time.h>

 #define ANCHO 10

 void cargarArr(int arreglo[], int *par);

 int main(){
   int A[ANCHO];
   int B[ANCHO];
   int parA,parB;

   srand(time(NULL));

   printf("\nArreglo A: \n");
   cargarArr(A, &parA);
   printf("\nArreglo B: \n");
   cargarArr(B, &parB);
   printf("\n");

   if(parA > parB){
     printf("El arreglo A tiene mas pares que el arreglo B\n");
   }else{
     printf("El arreglo B tiene mas pares que el arreglo A\n");
   }

 }

 void cargarArr(int arreglo[], int *par){
  *par = 0;
  for(int i = 0; i < ANCHO; i++){
    arreglo[i] = rand()%51;
    printf("%2d ", arreglo[i]);

    if(arreglo[i]%2 == 0){
      (*par)++;
    }
  }
}