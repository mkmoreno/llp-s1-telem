#include <stdio.h>

int main() {
  
  int numero = 1;
  int contador = 0;
  
  while (contador<30) {
    int multiplos4 = numero%4==0;  
    
    if (multiplos4) {
    printf("%d é par e multiplo de 4\n",numero);
    }
  numero++;
  contador++;
  }
}