/***********************************************************
 *                                                         *
 * Declare un Array de 10 enteros y permita que el usuario *
 *  ingrese valores comprencidos entre el -10 y el 10,     *
 *  asegurar eso, y luego lo muestre por pantalla.         *
 *                                                         *
 ***********************************************************/

#include <stdio.h>
#define ANCHO 10

int main() {
  int arr[10];
  int valor;

  for(int i=0; i < 10; i++) {
    printf("Ingrese %d/%d valor entre el -10 y el 10: ", i+1, ANCHO);
    
    scanf("%d", &valor);

    if( valor >= (-10) && valor <= ANCHO) {
      arr[i] = valor;
    } else {
      printf("El valor esta fuera de rango.\n");
      i--;
    }
  }

  for(int i=0; i < ANCHO; i++) {
    printf("El numero %d es: %d \n", i+1, arr[i]);
  }

  printf("\n");
  return 0;
}
