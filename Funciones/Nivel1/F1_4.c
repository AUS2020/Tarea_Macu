#include <stdio.h>
#define Dolar 0.015
#define PesoChileno 11.76

double pedirPesos(double *pesos);
void conver_A_Dolars(double pesos);
void conver_A_Peso_Chileno(double pesos);

int main(void){
  double pesosArg;
  pedirPesos(&pesosArg);
  conver_A_Dolars(pesosArg);
  conver_A_Peso_Chileno(pesosArg);

  return 0;
}

double pedirPesos(double *pesos){
  printf("Ingrese pesos argentinos: \n");
  scanf("%lf", pesos);
}

void conver_A_Dolars(double pesos){
  double dolares = (pesos * Dolar);
  printf("%.1lf pesos argentinos es igual a %.2lf dolares estadounidense\n", pesos, dolares);
}

void conver_A_Peso_Chileno(double pesos){
  double peso_chileno = (pesos * PesoChileno);
  printf("%.1lf pesos argentinos es igual a %.2lf pesos chilenos\n", pesos, peso_chileno);
}