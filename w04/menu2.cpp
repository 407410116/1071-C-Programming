
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
    for(int i=1;i<=height;i+=1)
              {
                  if(filled)
                  {
                      for(int j=1;j<=width;j+=1)
                      {
                          prchar('*',width);
                      }
                  }
                  else
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
                       printf("*");
                   }
                   else
                   {
                       printf("*");
                       prchar('*',i);
                       printf("*");
                   }
                   printf("\n");
               }
          }
       case 2:
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
                       printf("*");
                   }
                   else
                   {
                       printf("*");
                       prchar('*',i);
                       printf("*");
                   }
                   printf("\n");
               }
          }
}



int main()
{
    int choice;
    int height,width;
    int VerticalTriangle;

    while(1)
    {
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical triangle\n");
        printf("3. Exit\n");
        printf("=>");
        scanf("%d",&choice);
        if(choice==3) break;
        switch(choice)
        {
            case 1:
              printf("Enter height, width, filled :");
              scanf("%d %d",&height,&width);
              DrawRectangle(height, width);
              break;

            case 2:
              printf("Choice type of vertical triangle :");
              scanf("%d",&VerticalTriangle);
              switch(VerticalTriangle)
              {
               case 1:
                  printf("Enter height:");
                  scanf("%d",&height);
                  for(int i=1;i<=height;i+=1)
                  {
                      for(int j=1;j<=height;j+=1)
                      {
                          if(j==1 || i==height || i==j)
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
                  break;

                  case 2:
                  printf("Enter height:");
                  scanf("%d",&height);
                  for(int i=1;i<=height;i+=1)
                  {
                      for(int j=height;j>0;j-=1)
                      {
                          if(j==1 || i==height || i==j)
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
                  break;

                  case 3:
                  printf("Enter height:");
                  scanf("%d",&height);
                  for(int i=1;i<=height;i+=1)
                  {
                      for(int j=height;j>0;j-=1)
                      {
                          if(j==height || i==1 || i==j)
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
                  break;

                  case 4:
                  printf("Enter height:");
                  scanf("%d",&height);
                  for(int i=1;i<=height;i+=1)
                  {
                      for(int j=1;j<=height;j+=1)
                      {
                          if(i==1 || j==height || i==j)
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
                  break;

              }



        }

    }

return 0;
}
