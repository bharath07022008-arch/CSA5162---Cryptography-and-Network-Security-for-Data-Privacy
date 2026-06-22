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
    int n=3599;
    int plaintext=59;

    int factor=gcd(plaintext,n);

    if(factor>1)
        printf("Common factor found: %d\n",factor);
    else
        printf("No common factor found\n");

    return 0;
}
