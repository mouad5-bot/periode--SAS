#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nom[10], prenom[10], sexe[10];
    int age, numtel;

    printf("veuiller entrer votre nom : \n  ");
    scanf("%s", &nom );

    printf("veuiller entrer votre prenom :\n");
    scanf("%s", &prenom);

    printf("veuiller entrer votre age :\n");
    scanf("%d", &age);

    printf("tu es une femme ou bien un homme :\n");
    scanf("%s:", &sexe);

    printf("veuiller saisi votre numero de telephone :\n");
    scanf("%d:", &numtel);


    printf("\nvotre nom est %s",nom);
    printf("\nvotre prenom est %s",prenom);
    printf("\nvotre age est %d",age);
    printf("\nvotre sexe est %s",sexe);
    printf("\nvotre numero de telephone est %d",numtel);


    return 0;
}


