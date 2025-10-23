#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    int a = 0;
    a++;
    printf("%d", a);

    printf("\n\nEXERCICE 1\n\n");
    // avec un while
    int i = 0;
    while(i < 5) {
        printf("Hello World While!\n");
        i++;
    }

    // avec un for
    for(int j = 0; j < 5; j++) {
        printf("Hello World For!\n");
    }


    printf("\n\nEXERCICE 2\n\n");
    int nb = 0;
    printf("Donne moi un nombre : ");
    scanf("%d", &nb);
    for(int i = 0; i <= nb; i++) {
        printf("%d\n", i);
    }

    printf("\n\nEXERCICE 3\n\n");
    nb = 0;
    printf("Donne moi un nombre negatif : ");
    scanf("%d", &nb);
    for(int i = 0; i >= nb; i--) {
        printf("%d\n", i);
    }

    printf("\n\nEXERCICE 4\n\n");
    nb = 0;
    printf("Donne moi un nombre : ");
    scanf("%d", &nb);
    for(int i = 0; i <= nb; i+=3) {
        printf("%d\n", i);
    }


    printf("\n\nEXERCICE 5\n\n");
    nb = 0;
    int pas = 0;
    printf("Donne moi un nombre : ");
    scanf("%d", &nb);
    printf("Donne moi le pas de comptage : ");
    scanf("%d", &pas);
    for(int i = 0; i <= nb; i+=pas) {
        printf("%d\n", i);
    }


    printf("\n\nEXERCICE 6\n\n");
    int somme = 0;
    for(int i = 0; i <= 10; i++) {
        printf("%d\n", i);
        somme += i;
    }
    printf("Somme : %d\n", somme);


    printf("\n\nEXERCICE 7\n\n");
    somme = 0;
    nb = 0;
    printf("Donne moi un nombre : ");
    scanf("%d", &nb);
    for(int i = 0; i <= nb; i++) {
        printf("%d\n", i);
        somme += i;
    }
    printf("Somme des %d premiers entiers : %d\n", nb, somme);



    printf("\n\nEXERCICE 8\n\n");
    float somme_d = 0;
    float note = 0;
    for(int i = 0; i < 3; i++) {
        printf("Donne moi la note %d : ", i+1);
        scanf("%f", &note);
        somme_d += note;
    }

    printf("Moyenne : %f\n", somme_d/3.0);


    printf("\n\nEXERCICE 9\n\n");
    float somme_9 = 0;
    float note_9 = 0;
    int nb_notes = 0;
    printf("Combien vas-tu me donner de notes : ");
    scanf("%d", &nb_notes);
    printf("%d\n", nb_notes);
    for(int i = 0; i < nb_notes; i++) {
        printf("Donne moi la note %d : ", i+1);
        scanf("%f", &note_9);
        somme_9 += note_9;
    }

    printf("Moyenne : %.2f\n", somme_9/nb_notes);


    printf("\n\nEXERCICE 10 \n\n");
    int X = 0;
    printf("Table de multiplication de : ");
    scanf("%d", &X);
    for(int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", X, i+1, X*(i+1));
    }

    printf("\n\nEXERCICE 12 \n\n");

    int nb10 = 0;
    int facto = 1;
    printf("Factorielle de : ");
    scanf("%d", &nb10);

    // de 1 jusqu'au nombre
    //for(int i = 1; i <= nb10; i++) {
    //    facto *= i;
    //}

    // du nombre jusqu'a 1
    for(int i = nb10; i > 0; i--) {
        facto *= i;
    }
    printf("%d! = %d\n", nb10, facto);



    printf("\n\nEXERCICE 13 \n\n");

    int jour = 0, mois = 0, annee = 0, valid = 0, bissextile = 0;

    while(valid == 0) {
        printf("Saisir le jour : ");
        scanf("%d", &jour);
        if(jour < 1 || jour > 31) {
            printf("Jour invalide\n");
            continue;
        }

        printf("Saisir le mois : ");
        scanf("%d", &mois);
        if(mois < 1 || mois > 12) {
            printf("Mois invalide\n");
            continue;
        }
        if(mois == 2 && jour > 29) {
            printf("Fevrier compte 29 jours au maximum\n");
            continue;
        }
        if(jour == 31 && (mois == 2 || mois == 4 || mois == 6
        || mois == 9 || mois == 11)) {
            printf("Ce mois n'a pas 31 jours\n");
            continue;
        }

        printf("Saisir l'annee : ");
        scanf("%d", &annee);
        if(mois == 2 && jour == 29) {
            if ((!(annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0))) {
                printf("L'annee n'est pas bissextile, fevrier %d compte 28 jours", annee);
                continue;
            }
        }
        valid = 1;

    }
    printf("La date est valide : %02d/%02d/%04d\n", jour, mois, annee);
    printf("La date est valide : %d/%d/%d\n", jour, mois, annee);


    printf("\n\nEXERCICE 14 \n\n");
    for(int j = 0; j < 15; j++) {
        int nb14 = 0;
        int fibo = 0, t1 = 1, t2 = 1;
        //printf("Donne moi un nombre : ");
        //scanf("%d", &nb14);
        nb14 = j;
        if(nb14 < 2) fibo = 1;
        else {
            for(int i = 0; i < nb14; i++) {
                fibo = t1 + t2;
                t1 = t2;
                t2 = fibo;
            }
        }
        printf("Fibo(%d) = %d\n", nb14, fibo);
    }
*/

    printf("\n\nEXERCICE 15 \n\n");
    int montant = 2500;
    int codeSecret = 1234;
    int codeUtilisateur = 0;
    int choix = 0;
    int somme = 0;
    while(codeUtilisateur != codeSecret) {
        printf("Code secret : ");
        scanf("%d", &codeUtilisateur);
        if(codeUtilisateur != codeSecret) {
            printf("CODE INCORRECT, reessayez\n");
        }
    }

    while(choix != 4) {
        printf("1. Voir son compte\n");
        printf("2. Ajouter de l'argent\n");
        printf("3. Retirer de l'argent\n");
        printf("4. Quitter\n");

        printf("\nQuel est votre choix : ");
        scanf("%d", &choix);

        if(choix == 1) {
            printf("Vous possedez %d euros sur votre compte\n", montant);
        } else if(choix == 2) {
            printf("Combien voulez-vous ajouter : ");
            scanf("%d", &somme);
            montant += somme;
        } else if(choix == 3) {
            printf("Combien voulez-vous retirer : ");
            scanf("%d", &somme);
                while(codeUtilisateur != codeSecret) {
                    printf("Code secret : ");
                    scanf("%d", &codeUtilisateur);
                    if(codeUtilisateur != codeSecret) {
                        printf("CODE INCORRECT, reessayez\n");
                    }
                }
                montant -= somme;
        }
    }

    printf("\n\nAu revoir ! \n");

    return 0;
}
