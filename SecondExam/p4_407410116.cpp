#include<stdio.h>
int Enter(int N)
{
    if(N==-1)
    {
        return 0;
    }
    else
    {
        scanf("%d",&N);
        return Enter(N);
    }
}
void prArray(int p[])
{
    int N;
    int p[]={N};
}
int main()
{
    int N;
    printf("Enter a series of scores between 0~100(-1 to exit).\n");
    Enter(N);
    prArray(p[]);
    return 0;
}
