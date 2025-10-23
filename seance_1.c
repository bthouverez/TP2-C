#include <stdio.h>
#include <stdlib.h>

// Cours séance 1

int main()
{

    printf("Coucou World!\n");
    int age; // déclaration
    age = 12; // initialisation
    float taille = 1.75; // déclaration + initialisation
    char caractere = 'z'; // déclaration + initialisation

    printf("La valeur de age est %d !\n", age);
    printf("La valeur de la taille est %f !\n\n", taille);

    printf("Donne moi ton age : ");
    scanf("%d", &age);

    printf("La valeur du caractere est %c\n", caractere);
    printf("Age : %d, taille : %f, le caractere : %c", age, taille, caractere);


    taille = 0;
    printf("Donne moi ta taille en metres : ");
    scanf("%f", &taille);

    float taille_cm = taille * 100;
    printf("Ta taille en cm est %f\n", taille_cm);

    return 0;
}
