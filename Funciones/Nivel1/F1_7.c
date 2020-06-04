#include <stdio.h>

int pedirValor(int *valor);
int validCapicua(int valor);

int main(void){
  int numero;
  
  pedirValor(&numero);
  validCapicua(numero);

  return 0;

}

int pedirValor(int *valor){
  printf("Ingrese un valor: \n");
  scanf("%d", valor);
}

int validCapicua(int valor){
  int resto, aux, numInvert = 0;
  aux = valor;
  while(aux >=1){
    resto = (aux%10);
    aux = (aux/10);
    numInvert = numInvert * 10 + resto; 
  }
  if(numInvert == valor){
    printf("el numero %d es capicua\n", valor);
  }else{
    printf("el numero %d no es capicua\n", valor);
  }
}
