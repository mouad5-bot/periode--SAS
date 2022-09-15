#include <stdio.h>
#include <stdlib.h>

int main()
{

 /*  a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en format décimal,
 et en soignant l’interface homme/machine.
(a/b donne le quotient de la division, a%b donne le reste de la division)    */

    int a, b, somme, sous, mul, div, rest;


    printf("entrer la valeur de a : ");
    scanf("%d", &a);

    printf("entrer la valeur de b : ");
    scanf("%d", &b);

    //calculons la somme de a et b (a+b)
    somme = a+b;
    printf("%d+%d=%d \n", a,b,somme);

    //calculons la soustraction de a et b (a-b)
    sous = a-b;
    printf("%d-%d=%d \n", a,b,sous);

    //calculons la multiplication de a et b (a*b)
    mul = a*b;
    printf("%d*%d=%d \n", a,b,mul);

    //calculons la Devision de a et b (a/b)
    div = a/b;
    printf("%d/%d=%d \n", a,b,div);

    //calculons le rest de la Devision eucludien de a et b (a%b)
    rest = a%b;
    printf("%d%%%d=%d \n", a,b,rest);

    return 0;
}
