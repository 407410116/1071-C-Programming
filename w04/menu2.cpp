#include <stdio.h>

void prchar(char c, int n)
{
    for(int i=1;i<=n;i+=1)
    {
        printf("%c",c);
    }
}

void DrawRectangle(int height, int width, int filled)
{
    if(filled)
    {
        for(int i=1;i<=height;i+=1)
        {
            prchar('*',width);
            printf("\n");
        }
    }
    else
    {
        for(int i=1;i<=height;i+=1)
        {
            for(int j=1;j<=width;j+=1)
            {
                if(i==1 || i==height || j==1 || j==width)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}

void DrawVerticalTriangle(int height, int type, int filled)
{
    switch(type)
    {
        case 1:

            if(filled)
            {
                for(int i=1;i<=height;i+=1)
                {
                    prchar('*',i);
                    printf("\n");
                }
            }
            else
            {
                for(int i=1;i<=height;i+=1)
                {
                    if(i==1 || i==height)
                    {
                        prchar('*',i);
                    }
                    else
                    {
                        printf("*");
                        prchar(' ',i-2);
                        printf("*");
                    }
                    printf("\n");
                }
            }
            break;

        case 2:

            if(filled)
            {
                for(int i=1;i<=height;i+=1)
                {
                    prchar(' ',height-i);
                    prchar('*',i);
                    printf("\n");
                }
            }
            else
            {
                for(int i=1;i<=height;i+=1)
                {
                    if(i==height)
                    {
                        prchar('*',i);
                    }
                    else
                    {
                        if(i==1)
                        {
                            prchar(' ',height-i);
                            printf("*");
                            printf("\n");
                        }
                        if(i>1)
                        {
                            prchar(' ',height-i);
                            printf("*");
                            prchar(' ',i-2);
                            printf("*");
                            printf("\n");
                        }
                    }
                 }
                 printf("\n");
            }
            break;

        case 3:

            if(filled)
            {
                for(int i=1;i<=height;i+=1)
                {
                    prchar('*',height-i+1);
                    printf("\n");
                }
            }
            else
            {
                for(int i=1;i<=height;i+=1)
                {
                    if(i==1)
                    {
                        prchar('*',height);
                    }
                    else
                    {
                        if(i<height)
                        {
                            printf("*");
                            prchar(' ',height-(i+1));
                            printf("*");
                        }
                        if(i==height)
                        {
                            printf("*");
                        }
                    }
                    printf("\n");
                }
            }
            break;

        case 4:

            if(filled)
            {
                for(int i=1;i<=height;i+=1)
                {
                    if(i==1)
                    {
                        prchar('*',height);
                    }
                    else
                    {
                        prchar(' ',i-1);
                        prchar('*',height-i+1);
                    }
                    printf("\n");
                }
            }
            else
            {
                for(int i=1;i<=height;i+=1)
                {
                    if(i==1)
                    {
                        prchar('*',height);
                    }
                    else
                    {
                        if(i<height)
                        {
                            prchar(' ',i-1);
                            printf("*");
                            prchar(' ',height-i-1);
                            printf("*");
                        }
                        if(i==height)
                        {
                            prchar(' ',height-1);
                            prchar('*',1);
                        }
                    }
                    printf("\n");
                 }
                 break;
            }
    }
}

void DrawIsoscelesTriangle(int height, int type, int filled)
{
    switch(type)
    {
        case 1:

            if(filled)
            {
                for(int i=1;i<=height;i+=1)
                {
                    if(i==1)
                    {
                        prchar(' ',height-1);
                        printf("*");
                    }
                    else
                    {
                        prchar(' ',height-i);
                        prchar('*',i-1);
                        printf("*");
                        prchar('*',i-1);
                    }
                    printf("\n");
                }
            }
            else
            {
                for(int i=1;i<=height;i+=1)
                {
                    if(i==1)
                    {
                        prchar(' ',height-1);
                        printf("*");
                    }
                    else
                    {
                        if(i<height)
                        {
                            prchar(' ',height-i);
                            prchar('*',1);
                            prchar(' ',i-2);
                            printf(" ");
                            prchar(' ',i-2);
                            prchar('*',1);
                        }
                        if(i==height)
                        {
                            prchar('*',height*2-1);
                        }
                    }
                    printf("\n");
                }
            }
            break;

        case 2:

            if(filled)
            {
                for(int i=1;i<=height;i+=1)
                {
                    if(i==1)
                    {
                        prchar('*',height*2-1);
                    }
                    else
                    {
                        prchar(' ',i-1);
                        prchar('*',height-i);
                        printf("*");
                        prchar('*',height-i);
                    }
                    printf("\n");
                }
            }
            else
            {
                for(int i=1;i<=height;i+=1)
                {
                    if(i==1)
                    {
                        prchar('*',height*2-1);
                    }
                    else
                    {
                        if(i<height)
                        {
                            prchar(' ',i-1);
                            prchar('*',1);
                            prchar(' ',height-i-1);
                            printf(" ");
                            prchar(' ',height-i-1);
                            prchar('*',1);
                        }
                        if(i==height)
                        {
                            prchar(' ',height-1);
                            printf("*");
                        }
                    }
                    printf("\n");
                }
            }


    }
}

int main()
{
    int choice,type;
    int height,width,filled;
    while(1)
    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Isosceles Triangle\n");
        printf("4. Exit\n");
        printf("=>");
        scanf("%d",&choice);
        if(choice==4) break;

        switch(choice)
        {
            case 1:
              printf("Enter height, width, filled :");
              scanf("%d %d %d",&height, &width, &filled);
              DrawRectangle(height, width, filled);
              break;

            case 2:
              printf("Enter height, type, filled :");
              scanf("%d %d %d",&height, &type, &filled);
              DrawVerticalTriangle(height, type, filled);
              break;

            case 3:
              printf("Enter height, type, filled :");
              scanf("%d %d %d",&height, &type, &filled);
              DrawIsoscelesTriangle(height, type, filled);
              break;
         }
    }
    return 0;
}
