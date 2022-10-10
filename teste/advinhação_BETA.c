#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main () {
	setlocale (LC_ALL, "Portuguese"); 
	printf ("***********************************\n");
	printf ("* Bem-vindo ao Jogo da Advinhação *\n");
	printf ("***********************************\n");
	
  int segundos = time(0);
  srand(segundos);
  int numerogrande = rand();
  int numerosecreto = numerogrande % 100;
  int chute;
  double pontos = 1000;
  int nivel;
  int valido = 1;
  int totaldetentativas;
  int acertou;
  int maior;
  int venceu;

  while (valido) {
  printf("\nQual o nível de dificuldade?\n");
  printf("(1) Fácil (2) Médio (3) Difícil\n\n");
  printf("Escolha: ");
  scanf("%d", &nivel);
  switch(nivel) {
  case 1:
    totaldetentativas = 20;
    valido = 0;
    break;
  case 2:
    totaldetentativas = 15;
    valido = 0;
    break;
  case 3:
    totaldetentativas = 6;
    valido = 0;
    break;
  default:
    printf ("Opção inválida!\nDigite uma opção válida.\n");
    continue;
    }
  }
  for (int i = 1; i <= totaldetentativas; i++) {
    printf ("\nSeu %dº chute de %d tentativas é: ",i, totaldetentativas);
	  scanf ("%d", &chute);
  acertou = chute == numerosecreto;
  maior = chute > numerosecreto;
  if (maior) {
    double pontosperdidos = (chute - numerosecreto)/(double)2;
    pontos = pontos - pontosperdidos;
    } else {
    int pontosperdidos = abs(chute - numerosecreto)/(double)2;
    pontos = pontos - pontosperdidos;
    }
  if (chute < 0) {
    printf ("Você não pode chutar números negativos");
    i--;
    continue;
  }
  venceu = chute == numerosecreto; 
  if (venceu) {
  break;
  } else if (maior) {
		printf ("Seu chute foi maior que o número secreto!");
		} else {
		printf ("Seu chute foi menor que o número secreto!");
	  }
  }
  if (venceu) {
		printf ("\nParabéns! Você acertou!");
    printf("\nVocê fez %.2f pontos\n",pontos);
    printf("\nObrigado por jogar!\n");
  } else {
    printf("\nVocê perdeu! Tente novamente!\n");
  }
}

 