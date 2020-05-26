 #include <stdio.h>
 #include <stdlib.h>
 #include<time.h>
 #define N 4
 #define imprimirArreglo(_arr, n) for(int _ia = 0; _ia < n; _ia++) { for(int _j = 0; _j < n; _j++) { printf("%3d ", _arr[_ia][_j]); } printf("\n");} printf("\n\n")

 int main (void){
   int x[N][N];
   int y[N][N];
   int suma[N][N];
   srand(time(NULL));

   //cargar los numeros en el array
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      x[i][j] = rand()%51;
      y[i][j] = rand()%51;
      //suma de "x e y"
      suma[i][j] = x[i][j] + y[i][j];
    }
  }

  printf("Matriz X\n");
  //imprimir el arreglo x 
  imprimirArreglo(x, N);
  printf("Matriz Y \n");
  //imprimir el arreglo y
  imprimirArreglo(y, N);
  printf("Matriz de la suma X e Y \n");
  //imprimir el arreglo de la suma x e y
  imprimirArreglo(suma, N);
  return 0;

 }

