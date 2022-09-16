#include <stdio.h>
#include <stdlib.h>

int main()
{

 /* Ecrivez un programme qui demande la température en Fahrenheit et la transforme
 en degré Celsius et affiche la sensation ressentie (très froid, froid, chaud, très chaud)
La formule : C = (F-32)/1.8   */

    int F;
    float C;
    printf("entrer la temperateur en fahrenheit : ");
    scanf("%d", &F);

    C = (F-32)/1.8;
    printf("voila la temperateur en degre celsius %.2f C \t", C);

    if(C <= 0){
        printf("tres froid");
    }

    else if (C > 0 && C <= 25){
        printf("froid");
    }

    else if (C > 25 && C <= 38){
        printf("chaud");
    }
    else {
        printf("tres chaud");
    }


    return 0;
}
