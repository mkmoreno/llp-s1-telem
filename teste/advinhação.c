#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese"); 
	printf ("***********************************\n");
	printf ("* Bem-vindo ao Jogo da Advinhação *\n");
	printf ("***********************************\n");
	
  int numerosecreto;
	numerosecreto = 42;

  int chute;
	printf ("Qual é o seu chute: ");
	scanf ("%d", &chute);
	printf ("Você chutou o numero: %d!\n", chute);
	int acertou = chute == numerosecreto;
	if (acertou) {
		printf ("Parabéns! Você acertou!");
	} else {
    int maior = chute > numerosecreto;
		if (maior) {
			printf ("Seu chute foi maior que o número secreto!\n");
		}
    int menor = chute < numerosecreto;
		if(menor) {
		printf ("Seu chute foi menor que o número secreto!");
		}
	}
}
