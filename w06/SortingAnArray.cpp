#include<stdio.h>
int main()
{
    int temp;
    int data[10]={34,78,12,9,87,66,88,99,56,11};
    int n=10;
    printf("original: ");
    for(int j=0;j<n;j++)
    {
        printf("%3d",data[j]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(data[j]>data[j+1])
            {
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    printf("sorting : ");
    for(int i=0;i<n;i++)
    {
        printf("%3d",data[i]);
    }
    return 0;
}
