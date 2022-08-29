#include <stdio.h>
#include <locale.h>
#define NUMERO_DE_TENTATIVAS 3

int main () {
	setlocale (LC_ALL, "Portuguese"); 
	printf ("***********************************\n");
	printf ("* Bem-vindo ao Jogo da AdvinhaÃ§Ã£o *\n");
	printf ("***********************************\n");
	
  int numerosecreto;
	numerosecreto = 42;
  int chute;
  for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){
  	printf ("\nQual é o seu %d° chute: ",i);
	  scanf ("%d", &chute);
	int acertou = chute == numerosecreto;
	if (acertou) {
		printf ("Parabéns! Você acertou!");
    printf("\nObrigado por jogar!\n");
    break;
	} else {
    int maior = chute > numerosecreto;
		if (maior) {
		printf ("Seu chute foi maior que o número secreto!");
		}
    int menor = chute < numerosecreto;
		if(menor) {
		printf ("Seu chute foi menor que o número secreto!");
		}
	 }
  }
  printf("\nFim de Jogo!\n");
 }
