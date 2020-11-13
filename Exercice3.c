#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main() {
	char prenom[20];
	char nom[20];
	char sexe;
	printf("Entrer votre prenom : ");
	scanf_s("%s", &prenom, (unsigned int)_countof(prenom));
	printf("\nEntrer votre nom : ");
	scanf_s("%s", &nom, (unsigned int)_countof(nom));
	printf("Quel est votre sexe ? (h/f)");
	sexe = toupper(_getch());
	switch (sexe) {
	case 'H' :
		printf("\nMonsieur ");
		break;
	case 'F' :
		printf("\nMadame ");
		break;
	}

	printf("%s %s", prenom, nom);

	printf("\n\n");
	system("pause");
}
