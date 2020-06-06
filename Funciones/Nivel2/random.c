
#include "./random.h"

#include <stdlib.h>
#include<time.h>


int random_fi(int fin, int inicio){
  return inicio + rand()%(1+fin - inicio);
}

int Random(int fin) {
  return random_fi(fin, 0);
}

void randomInit(void){
  srand(time(NULL));
}