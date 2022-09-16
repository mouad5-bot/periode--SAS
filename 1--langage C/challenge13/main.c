#include <stdio.h>
#include <stdlib.h>

int main()
{

 /*  Écrivez un programme C pour afficher la valeur équivalente en octal et en hexadécimal.
  Entrez un nombre entier et affichez sa valeur équivalente en octal et en hexadécimal.    */

    int n;
    printf("entrer la valeur de n : ");
    scanf("%d", &n);
    printf("la transformation en octale de la nombre n est : %o \n", n);
    printf("la transformation en hexadecimal de la nombre  n est : %x \n", n);
    return 0;
}
