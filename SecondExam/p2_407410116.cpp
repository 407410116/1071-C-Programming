#include<stdio.h>
int prime(int n)
{
    if(n==2)
    {
        return 2;
    }
    for(int i=2;i<n;i++)
    {
        if(2<n && n%i==0)
        {
            return 0;
        }
    }
    return n;
}
int findPrimes(int data[],int n1,int n2)
{
    for(int n1=n;n1<n2,n1++)
    {
        
    }
    int data[]={n};
}
int main ()
{
    printf("Enter n1 and n2: ");
    scanf("%d %d",&n1,&n2);
    printf("%d primes between %d and %d.\n",findPrimes(data,n1,n2),n1,n2);
}
