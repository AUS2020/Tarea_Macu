#include<stdio.h>

#define N 5

int main() {
  float A[N];
  float P[N];
  float f;

  for(int i=0; i<N; i++){
    printf("Ingrese un valor: ");
    scanf("%f", &A[i]);
  }

  while(1) {
    printf("Ingrese un valor en el rango (0,100]: ");
    scanf("%f", &f);
    if(f>0 && f<=100) {
      break;
    } else {
      printf("Ingrese un numero de acuerdo al rango, vuelva a intentarlo.\n");
    }
  }

  for(int i= 0; i< N; i++) {
    P[i] = A[i] * f;
    printf(" %f ", P[i]);
  }
}
