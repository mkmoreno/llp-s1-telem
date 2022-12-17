#include <stdio.h>

int main() {
  FILE *arquivo;
  int operador = 1;
  char linha[50];

  arquivo = fopen("Lista_de_nomes.txt","w");

    while (operador == 1) {
        printf("Digite um nome: ");
        fflush(stdin);
        scanf ("\n%s", linha);
        fputs (linha, arquivo);

        printf("Deseja acrescentar mais um nome? \n(0 = NÃO / 1 = SIM)\n");
        scanf("%d", &operador);

        if(operador == 1){
          fputs("\n",arquivo);
        }
      
    }
  fclose (arquivo);
}
