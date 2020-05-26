#include <stdio.h>
#define ANCHO 15
#define imprimirArreglo(_arr, n) for(int _ia = 0; _ia < n; _ia++) printf("%3d ", _arr[_ia]); printf("\n\n")

int main() {
  int arr[ANCHO];
  int aux;

  printf("Ingrese 1/15 un numero: ");
  scanf("%d", &aux);
  arr[0] = aux;

  //pedirle un numero al usuario
  for(int i=1; i < ANCHO; i++) {
    printf("Ingrese %d/%d un numero: ", i+1, ANCHO);
    scanf("%d", &aux);
    if(aux > arr[i-1]){
      arr[i] = aux;
    }else{
      printf("ingrese un numero mayor al ingresado anteriormente\n");
      i--;
    }
    imprimirArreglo(arr, i+1);
  }
  return 0;
  
}




