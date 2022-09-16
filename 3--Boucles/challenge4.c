#include <stdio.h>
#include <stdlib.h>

int main()
{



    // IL FAUT MODIFIER



    int  max = 0, some = 0;
    int a = 1;

    printf("entrer un nombre inferieur a  100 : \n");

    while(a != 0){

    scanf("%d", &a);

    if (a > 100){
            printf("entrer SVP un valeur inferieur a 100");
    }

    do{
        if (a < max){ printf("%d est le MAX", max);  }

    }while (a < 100);

    }

    some += a;


    return 0;
}
