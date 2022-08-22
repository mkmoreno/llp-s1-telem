#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese"); 
	printf ("***********************************\n");
	printf ("* Bem-vindo ao jogo da Advinhação *\n");
	printf ("***********************************\n");
	
    int numerosecreto;
	int chute;
	numerosecreto = 42;
	int acertou = chute == numerosecreto;
	int maior = chute > numerosecreto;
	int menor = chute < numerosecreto;
	
	printf ("Qual é o seu chute: ");
	scanf ("%d", &chute);
	printf ("Você chutou o numero: %d!\n", chute);
	
	if (acertou) {
		printf ("Parabéns! Você acertou!");
	} else {
		if (maior) {
			printf ("Seu chute foi maior que o número secreto!\n");
		}
		if(menor) {
		printf ("Seu chute foi menor que o número secreto!");
		}
	}
}
