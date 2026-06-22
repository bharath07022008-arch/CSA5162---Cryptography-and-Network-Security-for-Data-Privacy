#include <stdio.h>

long long power(long long a,long long b,long long m){
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
    long long e=17,n=3233;
    char ch='A';

    long long m=ch-'A';
    long long c=power(m,e,n);

    printf("Encrypted Value = %lld\n",c);

    return 0;
}
