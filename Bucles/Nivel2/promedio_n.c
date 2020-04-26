 #include<stdio.h>

 int main (void){
  
  float entrada,
      resultado = 0,
      contador = 0;

  do {
    printf("Ingrese un numero: ");
    scanf("%f", &entrada);
    resultado += entrada;
    contador++;
  } while (entrada != 0);

  contador--;

  if(contador != 0) {

    printf("el promedio es: %.1f \n", resultado/contador );
  }else {
    printf("No ingreso numeros suficientes para calcular el promedio\n");
  }

  return 0;

 }
