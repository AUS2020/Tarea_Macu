//Crear funciones para pasar un número de binario a decimal y de decimal a binario.

#include <stdio.h>
#include <math.h>
#define DIMENSION 100

int pedirValor(int *numero);
void convertir_a_binario(int numero, char arreglo[]);
int longitud(char arreglo[]);
void invertirArr(char arr[], int length);
void convertir_a_decimal(char arreglo[], int lenght);

int main(void){
  int valor;
  char binario[DIMENSION];

  pedirValor(&valor);

  printf("\n");

  printf("%d convertido a binario es: ", valor);
  convertir_a_binario(valor, binario);

  printf("\n");

  printf("%s convertido a decimal es:  ", binario);
  convertir_a_decimal(binario, longitud(binario));

  printf("\n");

  return 0;
}

//pedir un numero para convertirlo en numero binario
int pedirValor(int *numero){
  printf("Ingrese un valor: \n");
  scanf("%d", numero);
}

//convierte el numero decimal a binario
void convertir_a_binario(int numero, char arreglo[]){
  int contador = 0;

  while(numero != 0){
    arreglo[contador] = (numero%2 ==0)?'0':'1';
    numero = numero/2;
    contador++; 
  }
  arreglo[contador+1] = 0;//'\0';

  invertirArr(arreglo, contador);
  //imprimir el arreglo
  //for(int i = 0; i < contador ; i++ ){
  //  printf("%c", arreglo[i]);
  //}
  printf("%s\n", arreglo);
}

//longitud del arreglo
int longitud(char arreglo[]){
  int i = 0;
  while(arreglo[i] != 0 && i < DIMENSION){
    i++;
  }
  return i;
}

//inverte el arreglo
void invertirArr(char arr[], int length){
  int aux;
  for(int i = 0; i < (length/2); i++){
    aux = arr[i];
    arr[i] = arr[length - (i + 1)];
    arr[length - (i + 1)] = aux;
  }
}

//convertir de binario a decimal
void convertir_a_decimal(char arreglo[], int lenght){
  int decimal = 0;
  for(int i = 0; i < lenght; i++){
    decimal += (arreglo[lenght - i - 1] == '0' ) ? 0 : pow(2, i);
  }

  printf("%d\n", decimal);
}