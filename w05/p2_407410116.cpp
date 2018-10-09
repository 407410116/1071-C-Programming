#include<stdio.h>

void prchar(int c, int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",c);
    }
}

int main()
{
    int height;

    printf("Enter height (-1 to exit ): ");
    scanf("%d",&height);
    printf("\n");
    if(height==-1) return 0;

    for(int i=1;i<=height;i++)
    {
        prchar(' ',height-i);
        prchar('*',i);
        printf("  ");
        prchar('*',i);
        printf("\n");
    }
    return 0;
}
