#include <stdio.h>

int main() {
  
  int numerocontador = 0;
  
  while (numerocontador<30) {
    int multiplos4 = numerocontador%4==0;  
    int pares = numerocontador%4==0;
    
    if (!pares && !multiplos4) {
      numerocontador++;
      continue;
    } else {
    printf("%d é par e multiplo de 4\n",numerocontador);
    numerocontador++;
    }
  }
}