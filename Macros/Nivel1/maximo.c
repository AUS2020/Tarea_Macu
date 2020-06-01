#include <stdio.h>
//definimos nuestra macro MAXIMO
#define MAXIMO(x, y) ((x)>(y))? (x):(y)
//Esta macro compara si es x es mayor y entonces retorna x, si no retorn y

//todo programa en c empieza con una funcion main 
int main (){
  //declaracion de nuestras variables
  int numero1,
      numero2;

  // impresion de consola donde pedimos dos numeros
  printf("Ingrese dos numeros \n");
  // scanf toma los numeros ingresados desde la consola y los almacena en nuestras variables
  scanf("%d\n%d", &numero1, &numero2);
  // imprime el resutado de nuestra macro
  printf("El maximo numero entre %d y %d es %d.\n",numero1, numero2, MAXIMO(numero1, numero2));
  //si todo esta ok, la funcion main retorna un cero
  return 0;
}
