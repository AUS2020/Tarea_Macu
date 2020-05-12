
/***********************************************************
 *                                                         *
 * Declare 2 arrays de 5 enteros cada uno llamados A y B   *
 * S luego un tercer array de igual dimension llamado S    *
 * que almasene la suma de los dos anteriores.             *
 *                                                         *
 ***********************************************************/

#include <stdio.h>
#define ANCHO 5

int main() {
  int A[ANCHO];
  int B[ANCHO];
  int S[ANCHO];

  printf("\tIngesta de valores\n\n");

  for (int i=0; i < ANCHO ; i++) {
    printf("Cuenta %d/5\n\tIngrese el primer sumando: ", i+1);
    scanf("%d", &A[i]);
    printf("\tIngrese el segundo sumando:");
    scanf("%d", &B[i]);
  }

  printf("\n\tResoluciones:\n\n");

  for (int i=0; i < ANCHO ; i++) {
    S[i] = A[i] + B[i];
    printf(
      "El resultado de la cuenta (%d/5): %d + %d es %d.\n",
      i, A[i], B[i], S[i]
    );
  }

  return 0;
}
