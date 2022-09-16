#include <stdio.h>
#include <stdlib.h>

int main()
{
 /* Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius
La formule : C = (F-32)/1.8  */

    int F, C;
    printf("entrer la temperature en Fahrenheit");
    scanf("%d", &F);
    C = (F-32)/1.8;
    printf("voila la temperature en degre Celsius : %d", C);

    return 0;
}
