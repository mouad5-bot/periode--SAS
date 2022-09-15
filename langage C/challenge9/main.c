#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

/*  Ecrivez un programme C pour trouver la distance entre deux points donnés.
La formule de distance est dérivée du théorème de Pythagore.
Pour trouver la distance entre deux points (x1, y1) et (x2, y2),
il suffit d'utiliser les coordonnées de ces paires ordonnées et d'appliquer la formule.
Formule de distance
Supposons que nous ayons deux points M et N, dont les coordonnées sont respectivement (x1, y1) et (x2, y2).
Leur distance peut être représentée par MN et peut être calculée selon la formule ci-dessous,
Le premier point (M):- (x1, y1) Deuxième point (N) : (x2, y2) Distance (MN):- √((x2-x1)² + (y2-y1)²)
Exemple:- M = (4, 8) N = (12, 14)
Alors la distance entre M et N est MN = √((12-4)² + (14-8)²) = √(64 + 36) = √(100) = 10  */

int X1, Y1, X2, Y2, MN;


    printf(" entrer les  coordonnées de le point M X1 et Y1 :\n");
    scanf("%d%d", &X1, &Y1);

    printf(" entrer les  coordonnées de le point N X2 et Y2 :\n");
    scanf("%d%d", &X2, &Y2);

    MN = sqrt(pow((X2 - X1),2) + pow((Y2 - Y1),2));
    printf(" la distance entre les deux points M et N est %d :", MN);



    return 0;
}
