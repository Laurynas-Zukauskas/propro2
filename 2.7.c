#include<stdio.h>
#include<math.h>

int pow10(int i);

int main(){
    int a,b,l=0,i=0,c,d,neg=0;
    scanf("%d",&a);
    if(a<0){
        a=a*-1;
        neg=1;
    }
    b=a;
    while(b>0){
        l++;
        b=b/10;
    }
    while(i<l-1){
        if(i==0){
            if(a-a%100+a%10*10+a/10%10>a) a=a/100*100+a%10*10+a/10%10;
            i++;
        }
        else{
            b=a-a%pow10(i+2)+a%pow10(i);
            c=a/pow10(i+1)%10*pow10(i);
            d=a/pow10(i)%10*pow10(i+1);
            if(b+c+d>a){
                a=b+c+d;
                i--;
            }
            else i++;
        }
    }
    if(neg==1) a=a*-1;
    printf("%d",a);
    return 0;
}
int pow10(int i){
    int a=1;
    for(int j=1;j<=i;j++){
        a=a*10;
    }
    return a;
}
