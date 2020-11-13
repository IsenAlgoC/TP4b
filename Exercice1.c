#include "tp4.h"
#include <stdlib.h>
#include <stdio.h>

void main() {
	HEURE HeureDebut, HeureFin, Duree;
	HeureDebut.heure = 12;
	HeureDebut.minute = 30;
	Duree.heure = 0;
	Duree.minute = 45;

	HeureFin.heure = HeureDebut.heure + Duree.heure + ((HeureDebut.minute + Duree.minute) / 60);
	HeureFin.minute = (HeureDebut.minute + Duree.minute) % 60;

	printf("HeureDebut : %d:%d \nDuree : %d:%d \nHeureFin : %d:%d", HeureDebut.heure, HeureDebut.minute, Duree.heure, Duree.minute, HeureFin.heure, HeureFin.minute);

	printf("\n\n");
	system("pause");


}
