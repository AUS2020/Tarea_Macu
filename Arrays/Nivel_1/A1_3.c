#include <stdio.h>

#define isPar(a) ((a)%2==0)
#define isNeg(a) ((a)<0) 

int main(){

  int arr[10];
  int cuenta1 = 0;
  int cuenta2 = 0;
  int cuenta3 = 0;
  int cuenta4 = 0;
  int a;

  for (int i = 0; i<10; i++) {
    printf("Ingrese un valor: ");
    scanf("%d",&arr[i]);
    a=arr[i];

    if(!isNeg(a) && isPar(a)) {
      cuenta1++;
    } else if(!isNeg(a) && !isPar(a)) {
      cuenta2++;
    } else if (isPar(a)) {
      cuenta3++; 
    } else {
      cuenta4++;
    }
  }

  printf("Cuentas:\n");

  printf(" %d son positivos y pares.\n", cuenta1);
  printf(" %d son positivos e impares.\n", cuenta2);
  printf(" %d son negativos y pares.\n", cuenta3);
  printf(" %d son negativos e impares.\n", cuenta4);

 return 0;
}
