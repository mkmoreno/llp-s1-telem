#include <stdio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese"); 
	printf ("***********************************\n");
	printf ("* Bem-vindo ao Jogo da Advinha��o *\n");
	printf ("***********************************\n");
	
  int numerosecreto;
	numerosecreto = 42;

  int chute;
	printf ("Qual � o seu chute: ");
	scanf ("%d", &chute);
	printf ("Voc� chutou o numero: %d!\n", chute);
	int acertou = chute == numerosecreto;
	if (acertou) {
		printf ("Parab�ns! Voc� acertou!");
	} else {
    int maior = chute > numerosecreto;
		if (maior) {
			printf ("Seu chute foi maior que o n�mero secreto!\n");
		}
    int menor = chute < numerosecreto;
		if(menor) {
		printf ("Seu chute foi menor que o n�mero secreto!");
		}
	}
}
