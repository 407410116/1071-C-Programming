#include<stdio.h>
#include<ctype.h>
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
    return 1;
}
int main()
{
    char cont;
    char n;
    cont='Y';
    while(cont=='Y')
    {
        printf("Enter N: ");
        scanf("%d",&n);
        if(prime(n)==0)
        {
            printf("%d is not a prime.\n",n);
        }
        else
        {
            printf("%d is a prime.\n",n);
        }
        printf("Continue (Y/N)? ");

        getchar();
        cont=toupper(getchar());
        printf("\n");
    }
    printf("Coding by 407410116");
    return 0;
}

