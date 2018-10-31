#include<stdio.h>
void prchar(char c,int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%c",c);
    }
}
void drawRect(int height,int width)
{
    for(int i=1;i<=height;i++)
    {
        if(i<=height)
        {
            prchar('*',width);
        }
            printf("\n");
    }
}
int rdrawRect(int height,int width)
{
    if(height==0)
    {
        return 0;
    }
    else
    {
        prchar('*',width);
        printf("\n");
        return rdrawRect(height-1,width);
    }
}
int main()
{
    int height, width;
    printf("Enter height and width: ");
    scanf("%d %d", &height, &width);
    printf("Draw using iteration\n");
    drawRect(height,width);
    printf("\n");
    printf("Draw using recursion\n");
    rdrawRect(height,width);
    printf("\n");
    printf("Coding by 407410116\n");
}
