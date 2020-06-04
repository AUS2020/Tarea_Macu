#include <stdio.h>
#define DIMENSION 10

void cargarArr(int arreglo[], int dimension);
void mostrarArr(int arreglo[], int dimension);
int  pertenece(int arreglo[], int dimension, int busqueda);

int main(void){
  int arr[DIMENSION];
  int valor;

  cargarArr(arr, DIMENSION);
  printf("El arreglo es: ");
  mostrarArr(arr, DIMENSION);
  printf("\n");
  //ingrese un numero para buscar en el arreglo
  printf("Ingrese un numero para buscarlo en el arreglo: ");
  scanf("%d", &valor);
  printf("\n");

  if(pertenece(arr, DIMENSION, valor)){
    printf("El numero %d esta en el arreglo\n", valor );
  }else{
    printf("El numero %d no esta en el arreglo\n", valor );
  }
  printf("\n");
}
//carga un array con valores suministrados por el usuario
void cargarArr(int arreglo[], int dimension){
  for(int i = 0; i< dimension; i++){
    printf("Ingrese un numero: %d/%d \n", i+1, dimension );
    scanf("%d", &arreglo[i]);
  }
  printf("\n");
}

//muestra un array
void mostrarArr(int arreglo[], int dimension){
  for(int i = 0; i< dimension; i++){
    printf("%d ", arreglo[i]);
  }
  printf("\n");
}

//determina si un entero está en el array
int pertenece(int arreglo[], int dimension, int busqueda){
  for(int i = 0; i< dimension; i++){
    if(arreglo[i] == busqueda){
      // regresa 1 (true)
      return 1;
    }
  }
  //regresa 0 (false)
  return 0;
  
}
