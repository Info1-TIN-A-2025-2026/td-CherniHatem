#include <stdio.h>

int main()
{
	// 1. Déclaration et initialisation des variables
	char a = 'A';
	int num_students = 22;
	int num_chairs = 32;
	int delta = num_students - num_chairs;

	// 2. Variables pour les interrupteurs (1 = allumé, 0 = éteint)
	unsigned char SW1 = 1; // Lampe prof allumée
	unsigned char SW2 = 1; // Lampe salle allumée

	// 3. Variable state : SW1 au bit 0, SW2 au bit 4
	unsigned char state = 0;
	state |= (SW1 << 0); // placer SW1 au bit 0
	state |= (SW2 << 4); // placer SW2 au bit 4

	// 4. Affichage
	printf("Caractere a = %c\n", a);
	printf("Nombre d'etudiants = %d\n", num_students);
	printf("Nombre de chaises = %d\n", num_chairs);
	printf("Delta = %d\n", delta);
	printf("Etat SW1 = %d\n", SW1);
	printf("Etat SW2 = %d\n", SW2);
	printf("Valeur de state (en binaire) : ");

	// Afficher les bits de state
	for (int i = 7; i >= 0; i--)
	{
		printf("%d", (state >> i) & 1);
	}
	printf("\n");

	return 0;
}
