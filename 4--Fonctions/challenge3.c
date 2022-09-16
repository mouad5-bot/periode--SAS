#include <stdio.h>
#include <stdbool.h>


bool isPremier(int a) {
    int premier = true;

    for (int i=2; i<a; i++){

       return false;
       break;
    }
    if(premier == true){
        printf("le %d est premier", a);
    }else
        printf("le %d n'est pas premier", a);
  }

int main()
{
    int nbr;
    printf("entrer un nombre : ");
    scanf("%d", &nbr);

    isPremier(nbr);


    return 0;
}
