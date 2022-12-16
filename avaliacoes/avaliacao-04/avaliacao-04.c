#include <stdio.h>

int main() {

  int linha,coluna, slinha[3], st, sl0, sl1, sl2;
  int m[3][3] = {
                        {1,2,3},
                        {4,8,9},
                        {5,6,7}
                      };
  printf("Matriz\n");
  for (linha=0; linha<3; linha++) {
    for (coluna=0; coluna<3; coluna++) {
      printf(" M1 [%d][%d] = %d\n",linha,coluna,m[linha][coluna]);
    }
   }
    sl0=m[0][0] + m[0][1] + m[0][2];
    sl1=m[1][0] + m[1][1] + m[0][2];
    sl2=m[2][0] + m[2][1] + m[2][2];
  
  printf("\nSoma de cada linha da Matriz\n");
  printf("Soma da Linha 0: %d.\n",sl0);
  printf("Soma da Linha 1: %d.\n",sl1);
  printf("Soma da Linha 2: %d.\n",sl2);

  printf("\nSoma de todas as linhas da Matriz\n");
  st = sl0 + sl1 + sl2;
  printf("Soma de todas as linha é igual á: %d.\n",st);
}