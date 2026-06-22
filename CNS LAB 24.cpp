#include <stdio.h>

int gcd(int a,int b){
    while(b){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main(){
    int p=59,q=61;
    int n=p*q;
    int phi=(p-1)*(q-1);
    int e=31,d=1;

    while((d*e)%phi!=1)
        d++;

    printf("n = %d\n",n);
    printf("phi = %d\n",phi);
    printf("Private Key d = %d\n",d);

    return 0;
}
