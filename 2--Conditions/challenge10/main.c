#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int n, t;
    n = time(NULL);
    t= n%7;
    switch (t){
    case 1 :
        printf("lundi");
        break;
    case 2 :
        printf("mardi");
        break;
    case 3 :
        printf("mercredi");
        break;
    case 4 :
        printf("jeudi");
        break;
    case 5 :
        printf("venredi");
        break;
    case 6 :
        printf("samedi");
        break;
    case 7 :
        printf("dimench");
        break;
    default :
        printf("error");


    }



    return 0;
}
