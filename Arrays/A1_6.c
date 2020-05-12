 //para compilar : gcc A1_6.c -o a1_6 -lm  

 #include <stdio.h>
 #include <math.h>
 #define  ANCHO 10
 #define imprimirArreglo(_arr,n) for(int _ia = 0; _ia < n; _ia++) printf("%.1f ", _arr[_ia]);

 int main () {
   float arr[ANCHO];
   float valor,
         varianza,
         rango,
         promedio,
         suma = 0;

   int cuenta = 0;

  for(int i = 0; i < ANCHO ;i++ ){
    printf("Ingrese un numero entre [0-100] %d/%d \n", i+1, ANCHO);
    scanf("%f", &valor);

    if(valor >=0 && valor <=100){
      arr[i] = valor;
      cuenta++;
      suma += arr[i];
    }else{
      printf("ingrese un numero de acuerdo al rango, intentelo de nuevo \n");
      i--;
    }
  }

  promedio = suma / cuenta;

  for(int i = 0; i < ANCHO; i++){
    rango+= pow(arr[i] - promedio, 2);
  }

  varianza = rango / cuenta;

  printf("el arreglo es: ");
  imprimirArreglo(arr, ANCHO);
  printf("\n");
  printf("la suma es: %.1f \n", suma);
  printf("el promedio es: %.1f\n", promedio);
  printf("la varianza es: %.1f\n", varianza);

  return 0;

}
