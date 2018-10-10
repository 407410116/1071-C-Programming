#include<stdio.h>
int main()
{
    int cm1,cm2;
    float kg1,kg2,BMI;
    while(1)
    {
        printf("Enter height (-1 to exit): ");
        scanf("%d %d",&cm1 ,&cm2);
        if(cm1==-1 && cm2==-1) return 0;

        for(int i=cm1;cm2>=i;i++)
        {
            kg1=(i/100.)*(i/100.)*18.5;
            kg2=(i/100.)*(i/100.)*24;
            printf(" %d cm: %.1f ~ %.1f (kg)\n",i ,kg1 ,kg2);
        }
        printf("\n");
    }
    return 0;
}
