#include <stdio.h>

unsigned long long int pedirValor(unsigned long long int *valor);
unsigned long long int contarDigitos(unsigned long long int valor);

int main(void){
  unsigned long long int numero;

  pedirValor(&numero);

  contarDigitos(numero);
  
  return 0;

}

unsigned long long int pedirValor(unsigned long long int *valor){
  printf("Ingrese un valor: \n");
  scanf("%d", valor);
}

unsigned long long int contarDigitos(unsigned long long int valor){
  int contar = 0;
  unsigned long long int aux;
  aux = valor;
  while(aux >=1){
    aux = (aux/10);
    contar++;
  }
  printf("el numero %lu tiene %d digitos.\n", valor, contar);
}
