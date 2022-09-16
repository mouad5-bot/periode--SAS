#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*   Écrivez un programme C qui permet de calculer les solutions possible d’une équation 2ème degré.  */

    float x1,x2, a, b, c, delta;

    printf(" entrer les valeurs de a b c\n");
    scanf("%f%f%f", &a, &b, &c);

    delta = pow(b,2) - 4 * a * c;

    if (delta == 0){
        x1 = -b/(2*a);
        printf("voila le resultat de notre equation : %.2f", x1);
    }
    else if (delta > 0){
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);

        printf("x1 = %.2f \n", x1);
        printf("x2 = %.2f \n", x2);
    }
    else {

        printf("impposible d'avoire un resultat");
    }

    return 0;
}
