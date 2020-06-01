#include <stdio.h>
//definimos nuestra macro
#define MINIMO(x, y) ((x)<(y))? (x):(y)
//esta macro llamada minimo, compara si x es menor a y, si esta condicion se cumple, retorna x si no retorna y

// funcion main
int main (){
  //declaramos nuestras variables de tipo entero
  int numero1,
      numero2;

  //esta funcion imprime el texto ingrese dos numero, en la consola
  printf("Ingrese dos numeros \n");
  //funcion scanf captura los valores que ingresa el usuario, cuando le pedimos que ingrese un numero y despues almacena dichos valores en nuestras variables que hemos declarado. 
  scanf("%d\n%d", &numero1, &numero2);
  //esta funcion imprime el resulTado de nuestra macro
  printf("El minimo entre %d y %d es %d.\n",numero1, numero2, MINIMO(numero1, numero2));

  return 0;
}
