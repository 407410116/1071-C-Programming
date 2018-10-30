#include<stdio.h>
#define Max 50
void MagicDiagonal(int magic[][Max],int N)
{
    int row=N-1;
    int column=N/2;
    magic[row][column]=1;
    for(int i=2;i<=N*N;i+=1)
    {
        if(i%N==1)
        {
            row=(row-1+N)%N;
            //column=column%N;
        }
        else
        {
            row=(row+1)%N;
            column=(column+1)%N;
        }
        magic[row][column]=i;
    }
}
void MagicKnight(int magic[][Max],int N)
{
    int row=N-1;
    int column=N/2;
    magic[row][column]=1;
    for(int i=2;i<=N*N;i+=1)
    {
        if(i%N==1)
        {
            row=row-1;
        }
        else
        {
            row=(row-2+N)%N;
            column=(column+1)%N;
        }
        magic[row][column]=i;
    }
}
void prArray(int magic[][Max],int N)
{
    for(int i=0;i<N;i+=1)
    {
        for(int j=0;j<N;j+=1)
        {
            printf("%3d ",magic[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int magic[Max][Max]={0};
    int N=5;
    printf("Diagonal Move\n");
    MagicDiagonal(magic,N);
    prArray(magic,N);
    printf("\n\n");
    printf("Knight Move\n");
    MagicKnight(magic,N);
    prArray(magic,N);
    printf("\n\n");
    return 0;
}
