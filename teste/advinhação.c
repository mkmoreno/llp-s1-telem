#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese"); 
	printf ("***********************************\n");
	printf ("* Bem-vindo ao jogo da Advinha��o *\n");
	printf ("***********************************\n");
	
    int numerosecreto;
	int chute;
	numerosecreto = 42;
	int acertou = chute == numerosecreto;
	int maior = chute > numerosecreto;
	int menor = chute < numerosecreto;
	
	printf ("Qual � o seu chute: ");
	scanf ("%d", &chute);
	printf ("Voc� chutou o numero: %d!\n", chute);
	
	if (acertou) {
		printf ("Parab�ns! Voc� acertou!");
	} else {
		if (maior) {
			printf ("Seu chute foi maior que o n�mero secreto!\n");
		}
		if(menor) {
		printf ("Seu chute foi menor que o n�mero secreto!");
		}
	}
}
