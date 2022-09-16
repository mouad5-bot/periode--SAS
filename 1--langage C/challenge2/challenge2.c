#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
/*    Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius
La formule : F = (C*1.8)+32  */

    float C, F;
    printf("entrer la degre de la temperateure en Fahrenheit");
    scanf("%f", &F);
    C = (F+32)/1.8;
    printf("C =  %f°C", C);
    return 0;
}
