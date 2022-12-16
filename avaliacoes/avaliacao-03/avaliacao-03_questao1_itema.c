#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

  int a, b, c;
  float x1, x2, d;

  printf ("Qual a variavel A: ");
  scanf ("%d", &a);
  printf ("Qual a variavel B: ");
  scanf ("%d", &b);
  printf ("Qual a variavel C: ");
  scanf ("%d", &c);
  
  d = b*b - 4*a*c;
  x1 = (-b + sqrt(d))/(2.0*a);
  x2 = (-b - sqrt(d))/(2.0*a);

  if (d<0) {
    printf ("\nRaízes Imaginarias");
  } else {
    printf ("\nX1 é igual á: %.2f\n",x1);
    printf ("X2 é igual á: %.2f",x2);
  }
}
