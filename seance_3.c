#include <stdio.h>
#include <stdlib.h>

int main()
{

    float taille = 0;
    int poids = 0;
    float imc = 0;

    while(poids <= 0 || poids > 500) {
        printf("Donne moi ton poids en kg : ");
        scanf("%d", &poids);
    }

    do {
        printf("Donne moi ta taille en metres : ");
        scanf("%f", &taille);
    } while(taille < 0 || taille > 3);

    imc = poids / (taille * taille);

    printf("IMC : %f\n", imc);

    if(imc < 16.5) {
        printf("Denutrition\n");
    } else if(imc < 18.5) {
        printf("Maigreur\n");
    } else if(imc < 25) {
        printf("Corpulence normale\n");
    } else if(imc < 30) {
        printf("Surpoids\n");
    } else if (imc < 35) {
        printf("Obesite moderee\n");
    } else if(imc < 40) {
        printf("Obesite severe\n");
    } else {
        printf("Obesite morbide\n");
    }

    // Afficher 10 fois Hello World
    int i = 0;
    while(i < 5) {
        printf("Hello World While!\n");
        i++;
    }

    for(int j = 0; j < 5; j++) {
        printf("Hello World For!\n");
    }

    printf("Au revoir ! \n");

    return 0;
}
