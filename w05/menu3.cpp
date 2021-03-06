#include<stdio.h>

int LeapYear(int year)
{
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int TimeConvert(int hh, int mm, int ss)
{
    int seconds;
    seconds = (hh*3600)+(mm*60)+ss;
    return seconds;
}

int main()
{
    int choice;
    int year;
    int hh,mm,ss,seconds;

    while(1)
    {
    printf("Main Menu\n");
    printf("1. leap\n");
    printf("2. timeconvert\n");
    printf("3. Exit\n");
    printf("=>");
    scanf("%d",&choice);
    if(choice==3) break;

    switch(choice)
    {
        case 1:
            printf("Enter year: ");
            scanf("%d",&year);
            if(LeapYear(year))
            {
                printf("Year %d is a leap year.\n",year);
                printf("\n");
            }
            else
            {
                printf("%d is not a leap year.\n",year);
                printf("\n");
            }
            break;

        case 2:
            printf("Enter hh:mm:ss  ");
            scanf("%d:%d:%d",&hh, &mm, &ss);
            if(TimeConvert(hh,mm,ss)>=0)
            {
                printf("%02d:%02d:%02d = %d seconds\n",hh ,mm, ss, TimeConvert(hh,mm,ss));
                printf("\n");
            }
            break;
    }
    }
    return 0;
}
