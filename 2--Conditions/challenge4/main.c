#include <stdio.h>
#include <stdlib.h>

int main()
{

  /*  Ecrivez un programme C pour calculer la somme de deux valeurs entières données.
   Si les deux valeurs sont identiques, il renvoie le triple de leur somme.  */

    int x, y, somme, triple;
    printf("veuiller entrer deux valeux x et y \n");
    scanf("%d%d", &x, &y);

    somme = x+y;
    triple = somme*3;

    if (x == y){
        printf("le triple est %d", triple);

    }
    else {
        printf("somme de x et y est %d", somme);
    }

    return 0;
}
