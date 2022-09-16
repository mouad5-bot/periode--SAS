#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()
{

 /*  Écrivez un programme pour trouver la circonférence d'un cercle. Prenez le rayon du cercle en entrée de l'utilisateur.
La formule pour, la circonférence du cercle = 2πr ; où r est le rayon.   */

    int r;
    float c;
    printf("veuiller entrer la valeur de r : \n");
    scanf("%d", &r);

    c = 2 * pi * r;
    printf("la circonférence de cercle est %.2f", c);
    return 0;
}
