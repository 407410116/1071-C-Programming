#include <stdio.h>

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
              printf("Enter height and width :");
              scanf("%d %d",&height,&width);
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


