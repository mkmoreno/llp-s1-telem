#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese"); 
	printf ("***********************************\n");
	printf ("* Bem-vindo ao Jogo da Advinhação *\n");
	printf ("***********************************\n");
	
  int numerosecreto = 42;
  int chute;
  int ganhou = 0;
  int tentativas = 1;
  double pontos = 1000;
  
  while (!ganhou){
    printf ("\nQual é o seu %d° chute: ",tentativas);
	  scanf ("%d", &chute);
  int acertou = chute == numerosecreto;
  int maior = chute > numerosecreto;
  if (maior) {
    double pontosperdidos = (chute - numerosecreto)/2.0;
    pontos = pontos - pontosperdidos;
    } else {
    int pontosperdidos = (numerosecreto - chute)/2.0;
    pontos = pontos - pontosperdidos;}
  if (chute < 0) {
    printf ("Você não pode chutar números negativos");
    continue;
  }
	if (acertou) {
		printf ("Parabéns! Você acertou!");
    ganhou = 1;
    printf("\nVocê fez %.2f pontos\n",pontos);
    printf("\nObrigado por jogar!\n");
	} else if (maior) {
		printf ("Seu chute foi maior que o número secreto!");
		} else {
		printf ("Seu chute foi menor que o número secreto!");
		}
    tentativas++;
	 }
  }
 