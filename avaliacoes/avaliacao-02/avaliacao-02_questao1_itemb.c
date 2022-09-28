#include <stdio.h>

int main() {
  
  int numero = 1;
  int contador;
  
  for (contador=0;contador<100;contador++) {
    int pares = numero%2==0;
    int multiplos5 = numero%5==0;  
    
    if (pares && multiplos5){
      printf("%d é par e multiplo de 5\n",numero);
    }
    numero++;
  }
return 0;
}