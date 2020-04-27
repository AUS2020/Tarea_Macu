#include <stdio.h>


int main(){
  int ancho = 7;
  int alto = 4;
  int contador = 1;
  int total =  ancho * alto;

  while(contador <= total){

    if(!(contador%2 ==0)){
      printf("@");
    }else{
      printf(".");
    }

    if(contador%ancho==0 && contador!=0){
      printf("\n");
    }
    contador++;
  }
}
