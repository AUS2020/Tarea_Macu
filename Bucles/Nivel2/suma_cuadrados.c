#include<stdio.h>
#include<math.h>

int main (void) {

  long suma = 0;
  int cuadrado = 2;

  for(int i = 1; i<=100; i++){
    suma += pow(i, cuadrado);
  }

  printf("La suma es %ld\n", suma);

  return 0;

}
