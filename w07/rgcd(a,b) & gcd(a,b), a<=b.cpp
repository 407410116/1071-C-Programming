#include<stdio.h>

int rgcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    if(a<=b)
    {
        return rgcd(b%a,a);
    }
}

int gcd(int a, int b)
{
    int n;
    if(a==b)
    {
        return a;
    }
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        n=i;
    }
    return n;


}

int main()
{
    printf("gcd(48,126)=%d\n",rgcd(48,126));
    printf("gcd(48,126)=%d\n",gcd(48,126));
    printf("\n");
    printf("gcd(48,128)=%d\n",rgcd(48,128));
    printf("gcd(48,128)=%d\n",gcd(48,128));
    printf("\n");
    printf("gcd(48,144)=%d\n",gcd(48,144));
    printf("gcd(48,144)=%d\n",rgcd(48,144));
    printf("\n");
    printf("gcd(48,48)=%d\n",gcd(48,48));
    printf("gcd(48,48)=%d\n",rgcd(48,48));
    printf("\n");
    return 0;
}
