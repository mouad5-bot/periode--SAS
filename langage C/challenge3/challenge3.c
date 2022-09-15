#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

/* Ecrivez un programme qui demande la distance en Metre et la transforme en Mile
La formule : Mile = Km*1.609
(tenir en compte la conversion métrique) */
{
    float m, mile;
    printf(" donner la distance en metre :");
    scanf("%f", &m);
    mile = 1.609*1000*m;
    printf("\n voila le resultat de la conversation de metre en mile \t%f \n\n\n", mile);

    return 0;
}
