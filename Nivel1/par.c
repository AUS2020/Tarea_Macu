#include <stdio.h>
//definimos nuestra macro PAR
// en esta macro compara si x es divible por 2 y su resto es cero entonces sera par si no es impar
#define PAR(x) ((x)%2== 0)? "par":"impar"

//funcion main
int main (){
  //variable entera
  int numeroEvaluar;

  printf("Ingrese un numero \n");
  scanf("%d", &numeroEvaluar);
  // imprime el resultado de nuestra macro
  printf("El numero  %d  es %s.\n",numeroEvaluar, PAR(numeroEvaluar));

  return 0;
}
