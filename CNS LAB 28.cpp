#include <stdio.h>
#include <math.h>

long long modexp(long long a,long long b,long long m){
    long long r=1;
    while(b){
        if(b%2)
            r=(r*a)%m;
        a=(a*a)%m;
        b/=2;
    }
    return r;
}

int main(){
    long long q=23,a=5;
    long long xa=6,xb=15;

    long long ya=modexp(a,xa,q);
    long long yb=modexp(a,xb,q);

    long long ka=modexp(yb,xa,q);
    long long kb=modexp(ya,xb,q);

    printf("Shared Key Alice = %lld\n",ka);
    printf("Shared Key Bob   = %lld\n",kb);

    return 0;
}
