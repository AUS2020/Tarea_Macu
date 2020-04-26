#include <stdio.h>

int main (){

  int entrada;
  int resultado = 0;

  for(int i = 0; i<10; i++){
    printf("Ingrese el numero  %d/10: ",i+1);

    scanf("%d", &entrada);
    resultado+= entrada;
  }

  printf("el promedio es: %.1f \n", ((float)resultado)/10.0 );


}
