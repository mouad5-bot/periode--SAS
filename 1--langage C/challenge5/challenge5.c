#include <stdio.h>
#include <stdlib.h>

int main()
{
 /* Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius et affiche la sensation ressentie (très froid, froid, chaud, très chaud)
La formule : C = (F-32)/1.8 */

    int C, F;
    printf(" donner la degre en Fahrenheit : ");
    scanf("%d", &F);
    C = (F-32)/1.8;
    printf("voila le resultat enCelsius :  %d C \t ", C);



    if (F <= 0)
         printf("tres froid");


    else if (F == 20)
         printf("froid");


    else if ( F == 38)
        printf("chaud");


    else
        printf("tres chaud \n\n\n\n\n");







    return 0;
}
