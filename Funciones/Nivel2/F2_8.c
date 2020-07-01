#include <stdio.h>

int func();

int main(){
  int i = 0;
  for(i = 0; i < 10; i++){
    printf("%d" , func());
  }

  printf("\n");

  for(int i = 0; i < 10; i++){
    printf("%d", estatico());
  }

  printf("\n");

  return 0;

}

  int func (){
    static b = 0;
    return b++;
  }

  int estatico (){
    static b = 0;
    if(b == 4){
      b = 0;
    }
    return b++;
  }