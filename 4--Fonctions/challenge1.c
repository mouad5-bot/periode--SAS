#include <stdio.h>
#include <stdlib.h>

int add(int a , int b) {
    return a+b;
}

int main()
{
    int a, b,s;
    printf("entrer la valeur de  a et  b  :");
    scanf("%d%d", &a, &b);

    s=add(a, b);

    printf("\nla somme est : %d", s);
    return 0;
}
