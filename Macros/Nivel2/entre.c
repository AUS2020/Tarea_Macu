#include <stdio.h>
// definimos nuestra macro ENTRE_0_100
//esta macro va a verificar si x es menor o igual a cero y (&& => operador logico) si x es menor o igual a 100, si se cumple ambas condiciones nos retorna "esta", caso contrario nos retorna "no esta"
#define ENTRE_0_100(x) (((x)>=0 && (x) <=100)? "esta":"no esta")

//todo programa en c empieza con una funcion main
int main (){
  //declaracion de nuestra variable
  int numeroEvaluar;
  // esta funcion imprime en consola, que ingresemos un numero
  printf("Ingrese un numero, por favor! \n");
  // scanf toma los numeros ingresados desde la consola y los almacena en nuestras variables
  scanf("%d", &numeroEvaluar);
  // esta funcion imprime el resultado de nuestra macro
  printf("El numero %d %s entre el 0 y el 100.\n",numeroEvaluar, ENTRE_0_100(numeroEvaluar));

  return 0;
}
