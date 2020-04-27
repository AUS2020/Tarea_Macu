#include<stdio.h>

#ifndef HASTA
#define HASTA 10
#endif

int main(){
  printf("Tabla de multiplicar del 1 al %d\n", HASTA);

  printf("    ");
  for(int i = 1; i<=HASTA; i++){
    printf("%4i", i);
  }
    printf("\n");

    for(int i = 1; i<=HASTA; i++){
      printf("%4i", i);

      for(int j = 1;j<=HASTA;j++ ){
        printf("%4i", i*j);
      }
      printf("\n");
    }

  return 0;


}


