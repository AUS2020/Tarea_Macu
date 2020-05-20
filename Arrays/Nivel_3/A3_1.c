 #define D1 3
 #define D2 4
 #include <stdio.h>

 int main (void){
  int arr[D1][D2];
  
  //cargar los numeros en el array
  for(int i = 0; i < D1; i++){
    for(int j = 0; j < D2; j++){
      printf("Ingrese el numero [%d] [%d] ",i+1, j+1 );
      scanf("%d", & arr[i][j]);
    }
  }

  printf("\n");
  
  //imprimir el array
  for(int i = 0; i < D1; i++){
    for(int j = 0; j < D2; j++){
      printf("%3d", arr[i][j]);
    }
    printf("\n");
  }

  return 0;

}


 
