#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMENSION 10

int interseccion(int arreglo1[], int arreglo2[], int arreglo3[]);
int Union(int arreglo1[], int arreglo2[], int arreglo3[]);
int diferencia();
void cargarArr(int arreglo[], int dimension);
int pertenece(int numero, int arreglo[], int contador);
void mostrarArr(int arreglo[], int dimension);
int cargarElemento(int elemento,int arreglo[], int dimension);

int main(void){

  srand(time(NULL));
  int aux;

  int A[DIMENSION];
  int B[DIMENSION];
  int C[DIMENSION];
  int D[DIMENSION+ DIMENSION];

  cargarArr(A, DIMENSION);
  cargarArr(B, DIMENSION);
  mostrarArr(A, DIMENSION);
  printf("\n");
  mostrarArr(B, DIMENSION);
  printf("\n");
  aux = interseccion(A, B, C);

  printf("\n");

  if (aux == 0){
    printf("La interseccion es nula \n");
  }else{
    printf("La interseccion entre los conjuntos A y B es ");
    mostrarArr(C, aux);
    
  }

  printf("\n");

  aux = Union(A, B, D);
  printf("La union entre los conjuntos A y B son: ");
  mostrarArr(D, aux);


  printf("\n");

  aux = diferencia(A, B, C);
  printf("La diferencia entre los conjuntos A y B son: ");
  mostrarArr(C, aux);

  return 0;

}

int cargarElemento(int elemento,int arreglo[], int dimension) {
  if (!pertenece(elemento, arreglo, dimension - 1)){
    arreglo[dimension] = elemento;
    return 1;
  }else{
    return 0;
  }
}

void cargarArr(int arreglo[], int dimension)
{
  int numeroRand;
  for (int i = 0; i < dimension;){
    numeroRand = rand() % 101;
    //cuando no pertenece el elemento cargamos el arreglo
    i += cargarElemento(numeroRand, arreglo, i);
  }
}

int pertenece(int numero, int arreglo[], int contador) {
  int valor = 0;
  for (int i = 0; i <= contador; i++) {
    if (arreglo[i] == numero) {
      valor = 1;
    }
  }
  return valor;
}

void mostrarArr(int arreglo[], int dimension) {
  printf("{ ");
  for (int i = 0; i < dimension; i++){
    printf("%d ", arreglo[i]);
  }
  printf(" }\n");
}

int interseccion(int arreglo1[], int arreglo2[], int arreglo3[]) {
  int contador = 0;
  for (int i = 0; i < DIMENSION; i++){
    if (pertenece(arreglo1[i], arreglo2, DIMENSION)) {
      arreglo3[contador] = arreglo1[i];
      contador++;
    }
  }
  return contador;
}

int Union(int arreglo1[], int arreglo2[], int arreglo3[]) {
  int contador = 0;
  for(int i = 0; i < DIMENSION; i++){
    contador += cargarElemento(arreglo1[i], arreglo3, contador);
    contador += cargarElemento(arreglo2[i], arreglo3, contador);
  }
  return contador;
}

int diferencia(int arreglo1[], int arreglo2[], int arreglo3[]){
  int contador = 0;
  for(int i = 0; i < DIMENSION; i++){
    if(!pertenece(arreglo1[i], arreglo2, DIMENSION))
      contador += cargarElemento(arreglo1[i], arreglo3, contador);
  }
  return contador;

}