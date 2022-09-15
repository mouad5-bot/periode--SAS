#include<stdio.h>
#include<math.h>

float f(float x){
    return pow(x, 3) + 12 * pow(x ,2) + 1;
}
int main(){
float a = -15 , b = -10, m; //[a , b] m centre de l'intervale

while( b - a > 0.00001){
    m = ( b + a ) / 2;

    if( f(a)*f(m) < 0 ) b = m;
   else a = m;
}

printf("[ %.7f , %.7f ] ", a, b);


return 0;}
