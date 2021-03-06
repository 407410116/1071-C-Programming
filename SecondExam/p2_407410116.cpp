#include<stdio.h>
#include<ctype.h>
#define Max 10
int prime(int n)
{
    if(n==2)
    {
        return 2;
    }
    for(int i=2;i<n;i++)
    {
        if(n>2 && n%i==0)
        {
            return 0;
        }
    }
    return n;
}
int findPrimes(int data[],int n1,int n2)
{
    int size;
    int datasize=0;
    for(int i=n1+1;i<n2;i++)
    {
        if(prime(i)==i)
        {
            data[datasize]=i;
            datasize=datasize+1;
        }
    }
    size=datasize;
    return size;
}
void prprime(int data[],int n1,int n2)
{
    int datasize=0;
    for(int i=n1+1;i<n2;i++)
    {
        if(prime(i)==i)
        {
            if(datasize<Max)
            {
                data[datasize]=i;
                printf("%3d ",data[datasize]);
                datasize=datasize+1;
            }
            if(datasize>Max-1)
            {
                printf("\n");
                datasize=datasize%Max;
                //printf("%d",datasize);
                //prprime(data,i,n2);
            }
        }
    }
    return;
}
int main()
{
    int n1,n2,size;
    char cont;
    int data[Max];
    cont='Y';
    while(cont=='Y')
    {
        printf("Enter n1 and n2: ");
        scanf("%d %d",&n1,&n2);
        prprime(data,n1,n2);   //123
        printf("\n");
        printf("%d primes between %d and %d.\n",findPrimes(data,n1,n2),n1,n2); //456
        prprime(data,n1,n2);   //123
        printf("\n");
        printf("Continue (Y/N)? ");
        getchar();
        cont=toupper(getchar());
        printf("\n");
    }
    printf("Coding by 407410116");
    return 0;
}
