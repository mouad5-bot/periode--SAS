#include <stdio.h>
#include <stdlib.h>

//Ecrire un programme C qui lit un entier puis détermine s'il est premier ou non.

int main()
{
    int nbr, i, premier;

    premier = 1;

    printf("Veuillez entrer un nombre: ");
    scanf("%d", &nbr);

    for(i=2; i<nbr; i++)
    {
        if(nbr%i == 0)
        {
            premier = 0;
            break;
        }
    }

    if(premier == 1)
        printf("Le nombre %d est premier\n", nbr);
    else
        printf("Le nombre %d n'est pas premier", nbr );

return 0;
}
