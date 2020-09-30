#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a, b, c, d;
	printf("saisir adresse IP : ");
	scanf_s("%d.%d.%d.%d", &a, &b, &c, &d);
	if (a > 1 && a < 127)
	{
		printf("\nclasse A");
		printf("\nadresse reseau:%d.0.0.0", a);
		printf("\nadresse masque:255.0.0.0");
		printf("\nadresse diffusion:%d.255.255.255\n", a);
	}
	else if (a > 127 && a < 192)
	{
		printf("\nclasse B");
		printf("\nadresse reseau:%d.%d.0.0", a, b);
		printf("\nadresse masque:255.255.0.0");
		printf("\nadresse diffusion:%d.%d.255.255\n", a, b);
	}
	else if (a > 192 && a < 223)
	{
		printf("\nclasse C");
		printf("\nadresse reseau:%d.%d.%d.0", a, b, c);
		printf("\nadresse masque:255.255.255.0");
		printf("\nadresse diffusion:%d.%d.%d.255\n", a, b, c);
	}
	else printf("\nadresse non valide\n");

}