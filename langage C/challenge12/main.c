#include <stdio.h>
#include <stdlib.h>

int main()
{

/*  Écrivez un programme C pour afficher un nombre entier à trois chiffres
 dans l'ordre inverse sans utiliser la boucle. Par exemple, si le nombre entier est 234, son inverse est 432.   */
    int a, b, c;
    printf(" donner trois nombres a b c :\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("VOILA VOTRE NOMBRE ENTERE : %d%d%d", a,b,c);
    printf("\n VOILA SANS INVERSE : %d%d%d", c,b,a);
    return 0;
}
