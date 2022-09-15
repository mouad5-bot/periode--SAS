#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*  Ecrire un programme C qui lit deux instants dans le format HH:MM:SS, et affiche un des messages suivants:

    Le premier instant vient avant le deuxième;
    Le deuxième instant vient avant le premier;
    Il s'agit du même instant.   */

    int h1, m1, s1, h2, m2, s2;

    printf("entrer deux istant comme suivante HH:MM:SS : \n");
    scanf("%d%d%d%d%d%d", &h1,&m1,&s1, &h2, &m2, &s2);


    if(h1 > h2){
        printf("Le premier instant est  %d:%d:%d \n", h1, m1, s1);
        printf("le dexieme instant est  %d:%d:%d \n", h2, m2, s2);
        printf("Le premier instant vient avant le deuxieme");
    }else if (h2 > h1){
        printf("Le dexieme instant est  %d:%d:%d\n", h2, m2, s2);
        printf("Le premier instant est  %d:%d:%d \n", h1, m1, s1);
        printf("Le deuxieme instant vient avant le premier\n \n");

    }else if(h1 == h2 && m1 == m2) {
        printf("Il s'agit du meme instant.\n\n");
    }

    return 0;
}
