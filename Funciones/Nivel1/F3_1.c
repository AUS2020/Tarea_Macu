#include <stdio.h>

float pedirValor(float *lado_a, float *lado_b, float *lado_c);
void  validarTriang(float lado_a, float lado_b, float lado_c);

int main(void){
  float a, b, c;

  pedirValor(&a, &b, &c);
  validarTriang(a, b, c);

  return 0;
}

float pedirValor(float *lado_a, float *lado_b, float *lado_c){
  printf("Ingrese 3 valores: \n");
  scanf("%f\n%f\n%f", lado_a, lado_b, lado_c);
}

void validarTriang(float lado_a, float lado_b, float lado_c){
  if(
    ((lado_a + lado_b) > lado_c) && 
    ((lado_a + lado_c) > lado_b) && 
    ((lado_b + lado_c) > lado_a)
  ){
    printf("Se puede construir un tringulo con los valores: a = %.1f, b = %.1f, c = %.1f\n", lado_a, lado_b, lado_c);
  }else{
    printf("Es imposible construir un tringulo con los valores: a = %.1f, b = %.1f, c = %.1f\n", lado_a, lado_b, lado_c);
  }
}

