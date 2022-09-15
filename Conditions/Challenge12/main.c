#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2, a, b;
     float disXY, disXA, disAY;

    printf("entere les coordonners de deux extremites d'un segment:  \n");

    scanf("%d%d%d%d", &x1, &y1, &x2 , &y2);

    printf("vous avez entrer deux extremites (%d,%d)  ET  (%d,%d)  \n\n", x1, y1, x2, y2);

    printf("entrer les coordonners d'un point .. :");

    scanf("%d%d", &a, &b);

    printf("vous avez entrer un point de coordonner (%d,%d)\n\n", a, b);

    //on va tester si cette point appartient a le segment.

    disXY = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
    disXA = sqrt(pow((a-x1), 2) +  pow((b-y1),  2));
    disAY = sqrt(pow((x2-a), 2) +  pow((y2-b),  2));

    if(disXY == disXA + disAY){
        printf("le point est appartient a le segment \n\n");
    }else{
        printf("le point  n'appartient pas a le segment \n  \n");
    }



    return 0;
}
