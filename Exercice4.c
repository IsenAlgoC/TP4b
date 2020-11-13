#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void main() {
	char palindrome[20];
	int taille;
	int test = 0;
	printf("Entrer un palindrome : ");
	scanf_s("%s", palindrome, (unsigned int)_countof(palindrome));

	taille = strlen(palindrome);

	for (int i = 0; i < taille; i++) {
		palindrome[i] = toupper(palindrome[i]);
	}

	for (int i = 0; i < taille / 2; i++) {
		if (palindrome[i] != palindrome[taille - 1 - i]) {
			test = 1;
			printf("Ce mot n'est pas un palindrome");
			break;
			}
		}
	if (test == 0) {
		printf("Ce mot est un palindrome");
	}

	printf("\n\n");
	system("pause");
}
