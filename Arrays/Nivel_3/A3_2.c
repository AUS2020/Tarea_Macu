 #define N 4
 #include <stdio.h>
 #include <stdlib.h>
 #include<time.h>

 int main (void){
  int arr[N][N];
  srand(time(NULL));
  
  //cargar los numeros en el array
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      arr[i][j] = rand()%51;
    }
  }

  printf("\n");
  
  //imprimir el array
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      printf("%3d", arr[i][j]);
    }
    printf("\n");
  }

  return 0;

}


 
