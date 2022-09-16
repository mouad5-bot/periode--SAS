#include <stdio.h>

void echanger(int a , int b, int c) {
    c=a;
    a=b;
    b=c;

    printf("\n a = %d", a);
    printf("\n b = %d", b);
}

int main()
{
    int a, b, c;
    printf("entrer la valeur de  a :");
    scanf("%d", &a);

    printf("entrer la valeur de  b :");
    scanf("%d", &b);

    echanger(a, b, c);

    return 0;
}
