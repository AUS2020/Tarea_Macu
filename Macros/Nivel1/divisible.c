#include <stdio.h>
//definimos nuestra macro
#define DIVISIBLE(x,y) (((x)%(y)== 0)? "divisible":"no divisible")
// esta macro recibe dos parametros los cuales verifican si el numero es divible o no con el otro numero.

//todo programa en c empieza con una funcion main 
int main (){

  //declaracion de las variables de tipo enteras
  int numeroEvaluar,
      numeroEvaluar2;
  // impresion de consola donde pedimos dos numeros
  printf("Ingrese dos numeros, por favor! \n");
  // scanf toma los numeros ingresados desde la consola y los almacena en nuestras variables
  scanf("%d\n%d", &numeroEvaluar, &numeroEvaluar2);
  // imprime el resutado de nuestra macro
  printf("El numero  %d  es %s por %d.\n",numeroEvaluar, DIVISIBLE(numeroEvaluar, numeroEvaluar2),numeroEvaluar2);
  //si todo esta ok, la funcion main retorna un cero
  return 0;
}
