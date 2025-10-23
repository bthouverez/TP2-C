#include <stdio.h>
#include <stdlib.h>

int main()
{
    // TP 1
    // EXERCICE 1

    int age = 0;
    printf("Donne moi ton age : ");
    scanf("%d", &age);
    printf("Tu m'as que tu avais %d ans\n", age);

    if(age < 0 || age > 200) {
        printf("ERREUR, pas possible\n");
    } else if(age >= 0 && age < 18) {
        printf("Mineur\n");
    } else {
        printf("Majeur\n");
    }



    printf("Au revoir ! \n");

    return 0;
}
