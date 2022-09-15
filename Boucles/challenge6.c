#include<stdio.h>
int main(){
    int i, j, n, v, p=0;

    scanf("%d", &n);
    v = n;
    for(i=2; i <= v; i++){
        for( j = 2; j < n; j++){
            if ( n%j == 0) p++;
        }
        if( p == 0 ) printf(" %d", n);
        n--;

    }

return 0;}
