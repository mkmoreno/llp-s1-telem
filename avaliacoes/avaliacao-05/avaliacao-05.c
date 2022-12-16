#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *MEUNOME;
    char nome[30];
    MEUNOME = fopen("meunome.txt","w");
    printf("Digite seu nome: \n");
    scanf ("%s", nome);
    fprintf (MEUNOME, "%s", nome);
    fclose (MEUNOME);

    return 0;
}