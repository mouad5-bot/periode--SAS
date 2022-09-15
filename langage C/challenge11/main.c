#include <stdio.h>
#include <stdlib.h>


int main()
{
 /*  Écrivez un programme pour trouver la circonférence d'un rectangle.
 Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur.
La formule pour la circonférence d'un rectangle = 2*(longueur + largeur).    */

    int L, W, C;
    printf(" entrer la longueur et la largeur du rectangle :\n");
    scanf("%d%d", &L, &W);
    C = 2*(L + W);
    printf("la circonference de ce rectangle est %d", C);
    return 0;
}
