#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nbr ;
    int some = 0;
    int  i=0;
    printf("entrer 10 nombres : \n");

    while( i < 10){
        scanf("%d", &nbr);

        if (nbr < 0){ continue; }

        some += nbr;
        i++;


    }
    printf("%d", some);

    return 0;
}
