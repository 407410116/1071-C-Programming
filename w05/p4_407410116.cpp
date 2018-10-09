#include<stdio.h>

int encode(int N)
{
    int a,b,c,d;
    int e,f,g,h;
    int x;

    a=N/1000;
    b=N/100-10*a;
    c=N/10-100*a-10*b;
    d=N-1000*a-100*b-10*c;

    e=c;
    f=d;
    g=(a+5)%10;
    h=b;

    x=e*1000+f*100+g*10+h;

    return x;

}

int decode(int encodex)
{
    int i,j,k,l;
    int m,n,o,p;
    int y;

    i=encodex/1000;
    j=encodex/100-10*i;
    k=encodex/10-100*i-10*j;
    l=encodex-1000*i-100*j-10*k;

    m=(k+5)%10;
    n=l;
    o=i;
    p=j;

    y=m*1000+n*100+o*10+p;

    return y;
}

int main()
{
    int N,encodex;

    while(1)
    {
        printf("Enter N (-1 to exit): ");
        scanf(" %04d",&N);
        if(N==-1) return 0;
        encodex=encode(N);
        printf("encode(%d) = %d\n",N ,encode(N));
        printf("decode(%d) = %d\n",encode(N) ,decode(encodex));
        printf("\n");
    }
    return 0;
}
