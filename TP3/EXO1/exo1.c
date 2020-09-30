#include<stdio.h>
#include<stdlib.h>

#define carre(x) (x) * (x)  // On rajooute des () entre les x pour permettre a la fonction d'afficher 36 lorsqu'on entre (Nb+1)

int main() {
	int Nb = 5;
	printf("%d", carre(Nb+1));
}
