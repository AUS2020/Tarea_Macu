#include <stdio.h>
#define ANCHO 10

int main (){
  int cuenta = 0;
  float arr[ANCHO];
  float promedio = 0;

  for(int i = 0; i < ANCHO; i++){
    printf("Ingrese un numero %i/%i\n", i+1, ANCHO);
    scanf("%f", &arr[i]);
    cuenta++;
    promedio+= arr[i];
  }

  promedio /= cuenta;

  printf("Los numeros que superan el %.1f de promedio son: \n", promedio);

  for(int i = 0; i < ANCHO; i++){
    if(arr[i] > promedio){
      printf("%2.1f ", arr[i]);
    }
  }

  printf("\n");

  return 0;

}




