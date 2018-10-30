#include<stdio.h>
#include<ctype.h>
int checkSqrt(int N)
{
    for(int i=1;i<=N;i++)
    {
        if(N==(i*i))
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int N;
    char cont;
    cont='Y';
    while(cont=='Y')
    {
        printf("Enter N: ");
        scanf("%d",&N);
        if(checkSqrt(N)==0)
        {
            printf("NO.\n");
        }
        else
        {
            printf("Yes. %d = %d x %d\n",N,checkSqrt(N),checkSqrt(N));
        }
        printf("Continue (Y/N)? ");
        getchar();
        cont=toupper(getchar());
    }
    printf("Coding by 407410116");
    return 0;
}
