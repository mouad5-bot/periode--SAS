#include <stdio.h>
#include <stdlib.h>

int main()
{

   char a;
    printf("entrer un caractere quelconque : \n");
    scanf("%c", &a);

    if ( (a >= 'a' && a <= 'z')|| (a >= 'A' && a <= 'Z')){
        printf("le caractere que vous avez entrer est  ALPHABET !\n");

        if( a >= 'A' && a <= 'Z' ){
            printf("vous aver entrer un caractere MAJUSCULE !\n");
        }
        else if ( a >= 'a' && a <= 'z' ) {
            printf("vous avez entrer un nombre MINISCULE !\n");
        }
        }
    else {
        printf("veuillez entrer un caractere de alphabets\n");
    }

    return 0;
}

















