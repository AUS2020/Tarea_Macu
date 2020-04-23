#include <stdio.h>
int main()
{
  int num1;
  int num2;
  int resultado;
  printf("ingrese el primer valor\n");
  //para leer el valor que el usario ingresa
  //scanf tiene dos argumentos 1.-tipo de dato y 2.-ruta o la variable donde vamos almacenar el valor
  //%d significa entero decimal
  scanf("%d",&num1);
  printf("ingrese el segundo valor");
  scanf("%d",&num2);
  resultado = num1 + num2;

  printf("El resultado de la suma es:  %d\n", resultado);

  return 0;

}
