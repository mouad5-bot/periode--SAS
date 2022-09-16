#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

/* Ecrivez un programme qui demande la distance en Mile et la transforme en Metre
La formule : Km = Mile/1.609
(tenir en compte la conversion métrique) */
{
    float m, mile;
    printf(" donner la distance en mile :");
    scanf("%f", &mile);
    m = (mile/1609)*1000;
    printf("\n voila la resultat de la conversation de mile en mitre \t%f \n\n\n", m);

    return 0;
}
