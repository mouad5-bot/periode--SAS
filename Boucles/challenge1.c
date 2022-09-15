#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,m;
        printf("Entre the number    : ");
        scanf("%d",&n);


    int i;
    for(i=1 ;i<=10 ; i++){

        m = i*n;

        printf("%d x %d = %d\n", i,n,m);

}
    return 0;
}
