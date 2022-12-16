#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];
    int c;
    printf("Qual seu nome? ");
    scanf ("%s", nome);
  
    size_t size = strlen(nome);
    for(int c = 0; c < size / 2; c++) {
       char tmp = nome[c]; 
       nome[c] = nome[size - c - 1];
       nome[size - c - 1] = tmp;
      }
    printf("Seu nome ao contario é: %s", nome);
}