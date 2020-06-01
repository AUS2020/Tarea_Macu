#include <stdio.h>


int convertir(int d, int hrs);

int main(void){
  int dias;
  int horas;


  for(int i = 1; i<= 1; i++){
    printf("Ingrese una cantidad de días: ");
    scanf("%d",&dias);

    printf("\n");

    printf("Ingrese una cantidad de horas: ");
    scanf("%d",&horas);

    if(dias >= 0 && horas >=0){
      convertir(dias, horas);
    }else{
      printf("Debe ingresar un numero positivo");
      i--;
    }

  }

}

int convertir(int d, int hrs){
  int hrsConvertidas = (hrs * 60);
  int diasConvertidos = (d * 1440);

  int minutos = hrsConvertidas + diasConvertidos;
  
  printf("%d dias y %d horas son %d minutos\n", d, hrs, minutos);
}
