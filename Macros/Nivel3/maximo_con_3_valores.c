#include <stdio.h>
// definimos nuestro macro MAXIMO
/* esta macro tiene dos partes, la primera verifica si "x" es mayor "y"
si "x" es mayor entonces verifica si "x" es mayor a "z", si lo es devuelve "x",
si no lo es retorna "z"

la segunda parte "x" no va ser mayor a "y", entonces
"y" es mayor por consiguiente verifica si "y" es mayor a "z", si lo es devuelve "y",
si no lo es retorna "z"
*/
#define MAXIMO(x, y, z) ( (x)>(y) ? (((x)>(z))?(x):(z)) : ((y)>(z)?(y):(z)))

//todo programa en c empieza con una funcion main 
int main (){
  //declaracion de las variables de tipo enteras
  int numero1,
      numero2,
      numero3;
  // impresion de consola donde pedimos tres numeros
  printf("Ingrese tres numeros \n");
  // scanf toma los numeros ingresados desde la consola y los almacena en nuestras variables
  scanf("%d\n%d\n%d", &numero1, &numero2, &numero3);
  // imprime el resultado de nuestra macro
  printf("El maximo numero entre %d , %d y %d es %d.\n",numero1, numero2,numero3, MAXIMO(numero1, numero2,numero3));
  //si todo esta ok, la funcion main retorna un cero
  return 0;
}
