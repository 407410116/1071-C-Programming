#include<stdio.h>
void prchar(char c,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",c);
    }
    printf("\n");
}
void prscore(int score[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%2d ",score[i]);
        if((i+1)%10==0) //wonderful
        {
            printf("\n");
        }
    }
}
int main()
{
    int n;
    int NumberCount=0;
    int FailedCount=0;
    int PassCount=0;
    float Average;
    int sum=0;
    int App=0;
    int Ap=0;
    int A=0;
    int B=0;
    int C=0;
    int F=0;
    int score[10];
    printf("Enter a series of scores between 0~100(-1 to exit).\n");
    scanf("%d",&n);
    while(n!=-1)
    {
        score[NumberCount]=n;  // ***************************
        NumberCount=NumberCount+1;
        if(n<60)
        {
            FailedCount=FailedCount+1;
            F=F+1;
        }
        if(n>=60)
        {
            PassCount=PassCount+1;
            if(n==100)
            {
                App=App+1;
            }
            if(n>=90&&n<=99)
            {
                Ap=Ap+1;
            }
            if(n>=80&&n<=89)
            {
                A=A+1;
            }
            if(n>=70&&n<=79)
            {
                B=B+1;
            }
            if(n>=60&&n<=69)
            {
                C=C+1;
            }
        }
        sum=sum+n;
        scanf("%d",&n);
    }
    Average=sum/(float)NumberCount;
    printf("Scores listing:\n");
    prscore(score,NumberCount);
    printf("\n");
    printf("The summary:\n");
    printf("NumberCount = %d\n",NumberCount);
    printf("FailedCount = %d\n",FailedCount);
    printf("PassCount = %d\n",PassCount);
    printf("Average = %.1f\n",Average);
    printf("\n");
    printf("100    %d ",App);
    prchar('*',App);
    printf("90~99  %d ",Ap);
    prchar('*',Ap);
    printf("80~89  %d ",A);
    prchar('*',A);
    printf("70~79  %d ",B);
    prchar('*',B);
    printf("60~69  %d ",C);
    prchar('*',C);
    printf("0~59   %d ",F);
    prchar('*',F);
    printf("\n");
    printf("Coding by 407410116");
    return 0;
}
