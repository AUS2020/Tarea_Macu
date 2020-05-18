#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define N 10
#define valorAbs(x) ((x) >= 0 ? (x): -(x))
#define imprimirArreglo(_arr, n) for(int _ia = 0; _ia < n; _ia++) printf("%3d ", _arr[_ia]); printf("\n\n")

void rotar(int arr[], int r);

int main (){
  int A [N];
  int r;
  srand(time(NULL));

  printf("Ingrese un numero con el rango [-%d,%d]: ", N-1, N-1);
  scanf("%d", &r);

  if (r < N && r > (-N) ) {
    for(int i = 0; i < N; i++)
      A[i] = rand()%51;
    
    imprimirArreglo(A, N);

    for(int i = 0; i<valorAbs(r); i++)
      rotar(A, r);

    imprimirArreglo(A, N);
   } else {
    printf("ingrese un numero de acuerdo al rango!!\n");
  }
  printf("\n");

  return 0;

}

void rotar(int arr[], int r){
  int aux;

  if(r >= 0){
    aux = arr[0];
    for(int i = 1; i < N; i++)
      arr[i-1] = arr[i];

    arr[N-1] = aux;
  }else{
    aux = arr[N-1];
    for(int i = N-1; i > 0; i--)
      arr[i] = arr[i-1];

    arr[0] = aux;
  }
}