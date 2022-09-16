#include <stdio.h>
#include <stdlib.h>

int main()
{

   /* Ecrire un programme C qui lit une date au format 15/10/2021 et l'affiche sous le format suivant: 15-Octobre-2021.*/

    int d, m, y;

    printf("entrer la date au format dd/mm/yyyy : ");
    scanf("%d%d%d", &d, &m, &y);


    if( m == 1 ){
        printf("%d-janvier-%d", d, y);
    }

    else if( m == 2 ){
        printf("%d-Fevrier-%d", d, y);
    }

    else if( m == 3 ){
        printf("%d-Mars-%d", d, y);
    }

    else if( m == 4 ){
        printf("%d-Avril-%d", d, y);
    }

    else if( m == 5 ){
        printf("%d-May-%d", d, y);
    }

    else if( m == 6 ){
        printf("%d-Juin-%d", d, y);
    }

    else if( m == 7 || m == 07){
        printf("%d-Juiller-%d", d, y);
    }


    else if( m == 8 ){
        printf("%d-ouat-%d", d, y);
    }

    else if( m == 9 ){
        printf("%d-September-%d", d, y);
    }

    else if( m == 10 ){
        printf("%d-October-%d", d, y);
    }

    else if( m == 11 ){
        printf("%d-November-%d", d, y);
    }

    else if( m == 12 ){
        printf("%d-December-%d", d, y);
    }

    return 0;
}
