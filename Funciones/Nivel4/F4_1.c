// Crear las siguientes funciones recursivas

// suma(a, b) = a + b
// prod(a, b) = a * b
// exp(a, b) = ab
// factorial(n) = n!

// fib(n) = n-ésimo término de la sucesión de Fibonacci (1, 1, 2, 3, 5, 8, 13, 21, 35, 56,...)

#include <stdio.h>
//funcion suma
int suma(int a, int b);
//funcion producto
int producto(int a, int b);
//funcion de la potenciacion
int potenciacion(int a, int b);
//funcion del factorial
int factorial(int n);
//sucesion fibonacci
int fibonacci(int f );

int main(void){
  int numero1 = 4;
  int numero2 = 3;

  printf("%d + %d =  %d \n", numero1, numero2, suma(numero1, numero2));
  printf("%d * %d =  %d \n", numero1, numero2, producto(numero1, numero2));

  if(numero1 != 0){
    printf("%d al exponente %d =  %d \n", numero1, numero2, potenciacion(numero1, numero2));
  }else{
    printf("El numero1 tiene que ser distinto a cero \n");
  }

  printf("El factorial de %d es: %d\n", numero1, factorial(numero1));

  printf("Sucesion de fibonacci desde 1 hasta el %d: ", numero1);
  for(int i = 1; i <= numero1; i++){
    printf("%d ",fibonacci(i));
  }
  printf("\n");
  return 0;
}

int suma(int a, int b){
  if(a == 0){
    return b;
  }else if(a>=1){
   return 1 + suma((a-1), b);
  }
}

int producto(int a, int b){
  if(a==0){
    return 0;
  }else if(a==1){
    return b;
  }else{
    return b + producto((a-1), b);
  }
}

int potenciacion(int a, int b){
  if(a==1){
    return 1;
  }else if(b==1){
    return a;
  }else if(b==0){
    return 1;
  }else{
    return a * potenciacion(a, (b-1));
  }
}
int factorial(int n){
  if(n==0){
    return 1;
  }else if(n==1){
    return 1;
  }else{
    return n * factorial(n-1);
  }
}

int fibonacci(int f ){
  if(f == 0){
    return 0;
  }else if(f==1){
    return 1;
  }else{
    return fibonacci(f-1) + fibonacci(f-2);
  }
}