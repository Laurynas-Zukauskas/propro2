#include<stdio.h>
#include<string.h>

int main(){
    int a;
    char b[100],c[]="lyginis",d[]="nelyginis";
    scanf("%d",&a);
    b[100] = (a%2==0) ? strcpy(b,c) : strcpy(b,d);
    printf("%s",b);
    return 0;
}
