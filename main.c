#include <stdlib.h>
#include <stdio.h>

#define SEPARATEUR '/'
#define TAILLETAB1 20

void main() {
	int MyTab1[TAILLETAB1];
	int * MyPtr1;

	for (int i = 0; i < 20; i++) {
		MyTab1[i] = i + 1;
		printf("%d %c ", MyTab1[i], SEPARATEUR);
	}

	printf("\n\n");

	MyPtr1 = &MyTab1[19];
	for (int i = 0; i < 20; i++) {
		MyPtr1 = &MyTab1[19 - i];
		printf("%d %c", *MyPtr1, SEPARATEUR);
	}

	printf("\n\n");
	system("pause");
}