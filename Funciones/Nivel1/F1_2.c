#include <stdio.h>

float converCelsius(float c);
float converFahrenheit(float f);

int main (void){
  float grado;

  printf("Ingrese un numero: ");
  scanf("%f",&grado);

  printf("\n");

  converCelsius(grado);
  converFahrenheit(grado);

  return 0;
}

float converCelsius(float c){
  float fahr = (c * 9/5) + 32;
  printf("%.1f celsius a %.1f fahrenheit\n",c, fahr);
}

float converFahrenheit(float f){
  float celsius = (f - 32) * 5/9;
  printf("%.1f fahrenheit a %1.f celsius\n",f, celsius);
}