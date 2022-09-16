#include <stdio.h>
#include <stdlib.h>

int main()
{

/* Écrivez un programme en C pour trouver la somme et la moyenne de quatre nombres. Prenez les entrées de l'utilisateur final.
Explication :
Soit trois nombres a, b et c alors, Somme = (a+b+c) et, Moyenne = somme/3  */

    int N1, N2, N3, N4, somme, moy;
    printf("veuiller entrer quatre nombre \n");
    scanf("%d%d%d%d", &N1, &N2, &N3, &N4);
    somme = N1 + N2 + N3 + N4;
    moy = somme/4;
    printf("la somme = %d \n", somme);
    printf("la moyenne = %d", moy);


    return 0;
}
