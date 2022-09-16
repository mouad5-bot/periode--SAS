#include<stdio.h>

int main(){
    int u[50], n, i;
    printf("donner la n");
    scanf("%d", &n);
    u[0] = u[1] = 1;
    for( i = 2; i<=n; i++ ){
        u[i] = u[i-1] + u[i-2];
    }

    printf("U[%d] = %d", n, u[n]);
    return 0;
}
