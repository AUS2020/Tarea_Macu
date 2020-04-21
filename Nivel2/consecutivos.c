#include <stdio.h>
/*
definimos nuestra macro CONSECUTIVOS, la cual toma dos parametros (x, y)
esta macro verifica si "y" es consecutivo a "x"; 
ejemplo CONSECUTIVOS(4,5) ((4)+1 ==(5)); entonces se cumple la condicion
y devuelve "es", caso contrario retorna "no es"*/
#define CONSECUTIVOS(x,y) (((x)+1==(y))? "es":"no es")

//todo programa en c empieza con una funcion main 
int main (){
  //declaracion de las variables
  int numeroEvaluar,
      numeroEvaluar2;
  // impresion de consola donde pedimos dos numeros
  printf("Ingrese dos numeros, por favor! \n");
  // scanf toma los numeros ingresados desde la consola y los almacena en nuestras variables
  scanf("%d\n%d", &numeroEvaluar, &numeroEvaluar2);
  // esta funcion imprime el resultado de nuestra macro, siguiendo con el ejemplo anterior nuestro output seria:
  //"El  numero 4 es consecutivo a 5"
  printf("El numero  %d  %s consecutivo a %d.\n",numeroEvaluar2, CONSECUTIVOS(numeroEvaluar, numeroEvaluar2),numeroEvaluar);
  //si todo esta ok, la funcion main retorna un cero
  return 0;
}
