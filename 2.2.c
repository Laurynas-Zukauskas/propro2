#include<stdio.h>
#include<math.h>

long long todec(long long b);
long long tobin(long long b);

int main(){
    long long a,a1=11011,a2=10010100,a3=11001011010101,b1=37,b2=241,b3=2487,c1=0x6E2,c2=0xED33,c3=0x123456,d1=243,d2=2483,d3=4612;
    a=tobin(b3);
    printf("a %d ", todec(a1));
    printf("%d ",todec(a2));
    printf("%d\n",todec(a3));
    printf("b %d ",tobin(b1));
    printf("%d ",tobin(b2));
    printf("%d\n",a);
    printf("c %d ", c1);
    printf("%d ",c2);
    printf("%d\n",c3);
    printf("d %d ",d1);
    printf("%d ",d2);
    printf("%d\n",d3);
    return 0;
}
long long todec(long long b){
    long long a=0,c=b,i=0;
    while(c>0){
        a=a+c%2*pow(2,i);
        c=c/10;
        i++;
    }
    return a;
}
long long tobin(long long b){
    long long a=7,c=b,i=0,d=0;
    while(c>0){
        a=a*10+c%2;
        c=c/2;
        i++;
    }
    while(a>7){
        d=d*10+a%10;
        a=a/10;
    }
    return d;
}
/*a 27 148 13013
  b 100101 11110001 100110110111
  c 1762 60723 1193046
  d F3 9b3 1204*/
