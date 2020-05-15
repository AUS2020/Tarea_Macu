 #include <stdio.h>
 #include <stdlib.h>
 #include<time.h>
 #define ANCHO 30

 int main(){
   int arr[ANCHO];
   srand(time(NULL));

   for (int i = 0; i < ANCHO; i++){
     arr[i] = rand()%51;
     printf("%d ", arr[i]);
   }

   printf("\n");

 }


