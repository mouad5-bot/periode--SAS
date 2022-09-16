#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr, puis, r;
    printf("entrer un nombre : \n");
    scanf("%d", &nbr);

    printf("entrer la puissance : \n");
    scanf("%d", &puis);

    while (nbr > 0 && puis >=0){

        r = pow(nbr,puis);
        printf("voila le resultat : %d \n\n", r);
        break;
    }


    return 0;
}
