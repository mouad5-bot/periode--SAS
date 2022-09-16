#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  Ecrivez un programme qui demande un nombre et affiche si ce nombre est paire ou impaire  */

    int n;
    printf("entrer un nombre : ");
    scanf("%d", &n);


    if(n%2 == 0) {
        printf("le nombre que vous avez entrer est paire");
    }
     else{
        printf("le nombre que vous avez entrer est impaire");
    }

    return 0;
}
