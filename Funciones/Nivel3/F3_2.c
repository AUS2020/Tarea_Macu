#include <stdio.h>
#include <stdlib.h>

#define DIMENSION 5
#define DIMENSION_char 10
#define MAXIMO 100
#ifdef __unix__
  #define clear system("clear")
#elif 
  #define clear system("cls")
#endif


//para definir un tipo
typedef char String[DIMENSION_char];
typedef struct _productos{
  String nombre;
  float precio;
} Producto;

// prototipos
Producto cargarProducto(float precio, String nombre);
void imprimirMenu();
int menu();
void cargarProductos();
void copiarCadena(String origen, String destino);
void inicializarCompra();
int pedirNumero();
void crearReporte();

//variables globales
Producto productos[DIMENSION];
int compra[DIMENSION];
float totalXproducto[DIMENSION];
float total;

//funcion main
int main(){

  cargarProductos();
  inicializarCompra();
  menu();
  crearReporte();

  return 0;
}

void imprimirMenu(){

  printf("--------------------------------------------------------------------Bienvenido a Macu Market-----------------------------------------------------------");
  printf("\n");
  printf("\n");
  printf("-------------------------------------------------------------------Oferta de la semana---------------------------------------------------------------------\n");
  printf("\n");
  printf("- Por la compra de mas de 10 productos de un mismo tipo, se le aplicará un 8%c de descuento sobre el costo total de los productos de ese tipo en particular.\n",37);
  printf("- Si usted hace un compra superando los %d pesos, se le aplicara un 15%c de descuento al costo total de la toda la compra. \n", MAXIMO, 37);

  printf("\n\n\t\tMenu\n\n"
  "Seleccione el producto a comprar:\n "
  );

  for(int i = 0; i < 5; i++){
    printf(
      "\t%d - %s\t$%.1f\n", i + 1, productos[i].nombre, productos[i].precio
    );
  }
  printf("\n");
  printf("Para terminar la compra ingrese 0\n");
}

int menu(){
  int opcion = (-1);
  int cantidad = 0;
  
  while (opcion!=0){
    //borra la pantalla antes de imprimir el menu
    clear;

    imprimirMenu();
    
    //mensajes de error
    switch (opcion){
      case (-2):
        printf("El valor ingresado es incorrecto.\n");
      break;

      case (-3):
        printf("La cantidad debe ser mayor o igual a 0.\n");
      break;
    }

    opcion = pedirNumero();

    if(opcion > 0 && opcion <=5){
      printf("Cuantos %s quiere comprar?\n", productos[opcion-1].nombre);
      cantidad = pedirNumero();
      if(cantidad >= 0){
        compra[opcion-1] = cantidad;
      }else{
        opcion = (-3); //ingreso una cantidad erronea
      }
    }else if (opcion !=0){
      opcion = (-2); // ingreso una opcion incorrecta
    }
  }
  return 0;
}

Producto cargarProducto(float precio, String nombre){
  Producto p;
  p.precio = precio;
  copiarCadena(nombre, p.nombre);

  return p;
}

void cargarProductos(){
  productos[0] = cargarProducto(5.5, "Platano");
  productos[1] = cargarProducto(4, "Fresa");
  productos[2] = cargarProducto(3.2, "Manzana");
  productos[3] = cargarProducto(8, "Palta");
  productos[4] = cargarProducto(13, "Huevo");
}

void copiarCadena(String origen, String destino){
  for(int i = 0; i < DIMENSION_char; i++ ){
    destino[i] = origen[i];
  }
}

void inicializarCompra(){
  for(int i =  0; i < DIMENSION; i++){
    compra[i] = 0;
  }
}

int pedirNumero(){
  int n;
  printf("ingrese un numero: ");
  scanf("%d", &n);
  return n;
}

void crearReporte(){
  //calculamos subtotales de cada producto
  for (int i = 0; i < DIMENSION; i++){
    totalXproducto[i] = compra[i]*(productos[i].precio) * ((compra[i] > 10) ?  (1.0 - 0.18) : 1.0);
    if(compra[i] !=0){
      printf("%d %s sale: %.2f", compra[i], productos[i].nombre, totalXproducto[i]);

      if(compra[i] > 10){
        printf(" Con un descuento del 18%c", 37);
      }
      printf("\n");
    }
  }

  total = 0;
  for (int i = 0; i < DIMENSION; i++){
    total+= (totalXproducto[i]);
  }

  if(total > MAXIMO){
    total *= (1.0 - 0.15);
    printf("Se aplica un descuento del 15%c al total, por superar los %d pesos.\n", 37, MAXIMO);  
  }

  printf("\t Total: %.2f$ \n", total);
  
  
}

