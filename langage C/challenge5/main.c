#include <stdio.h>
#include <stdlib.h>

int main()
{
 /* Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius et affiche la sensation ressentie (très froid, froid, chaud, très chaud)
La formule : C = (F-32)/1.8 */

    float C, F;
    printf(" donner la degre en Fahrenheit : ");
    scanf("%.2f", &F);
    C = (F-32)/1.8;
    printf("voila le resultat enCelsius :  %.2f C", C);



    if (C < 10){
         printf("tres froid");
    }
    else if (C > 37 && C < 40){
         printf("chaud");
    }
    else if (C > 40){
        printf("tres chaud");
}





    return 0;
}
