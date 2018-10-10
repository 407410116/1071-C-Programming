#include<stdio.h>

void ArithmeticComputation(int a, int b)
{
    int A,B,C,D,E;
    A = a + b;
    B = a - b;
    C = a * b;
    D = a / b;
    E = a % b;

    printf("%d + %d = %d\n",a ,b ,A);
    printf("%d - %d = %d\n",a ,b ,B);
    printf("%d * %d = %d\n",a ,b ,C);
    printf("%d / %d = %d\n",a ,b ,D);
    printf("%d %% %d = %d\n",a ,b ,E);
}

void ListBMIRanges(int cm1, int cm2)
{
    float kg1,kg2,BMI;
    for(int i=cm1;cm2>=i;i++)
    {
        kg1=(i/100.)*(i/100.)*18.5;
        kg2=(i/100.)*(i/100.)*24;
        printf(" %d cm: %.1f ~ %.1f (kg)\n",i ,kg1 ,kg2);
    }
}

void prchar(int c, int n)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%c",c);
        }
    }

void DrawFourVerticalTriangle(int height)
{
    for(int i=1;i<=height;i++)
    {
        prchar(' ',height-i);
        prchar('*',i);
        printf("  ");
        prchar('*',i);
        printf("\n");
    }
    printf("\n");
    for(int i=height;i>0;i--)
    {
        prchar(' ',height-i);
        prchar('*',i);
        printf("  ");
        prchar('*',i);
        printf("\n");
    }
}

int encode(int N)
{
    int a,b,c,d;
    int e,f,g,h;
    int x;

    a=N/1000;
    b=N/100-10*a;
    c=N/10-100*a-10*b;
    d=N-1000*a-100*b-10*c;

    e=c;
    f=d;
    g=(a+5)%10;
    h=b;

    x=e*1000+f*100+g*10+h;

    return x;

}

int decode(int N)
{
    int i,j,k,l;
    int m,n,o,p;
    int y;

    i=N/1000;
    j=N/100-10*i;
    k=N/10-100*i-10*j;
    l=N-1000*i-100*j-10*k;

    m=(k+5)%10;
    n=l;
    o=i;
    p=j;

    y=m*1000+n*100+o*10+p;

    return y;
}

int main()
{
    int a,b,A,B,C,D,E;
    int cm1,cm2;
    int height;
    int N;
    int choice;

    while(1)
    {
        printf("Main Menu :\n");
        printf("(1) Arithmetic Computation\n");
        printf("(2) List BMI ranges\n");
        printf("(3) Draw Four Vertical Triangle\n");
        printf("(4) encode(n)\n");
        printf("(5) decode(n)\n");
        printf("(6) Exit\n");
        printf("=>");
        scanf("%d",&choice);
        if(choice==6)
        {
            printf("\n");
            printf("Bye! coding by ID 407410116");
            return 0;
        }
        switch(choice)
        {
            case 1:
                printf("Enter two integers: ");
                scanf("%d %d",&a ,&b);
                if(a==-1 && b==-1)
                {
                    printf("\n");
                    printf("Bye! coding by ID 407410116");
                    return 0;
                }
                ArithmeticComputation(a, b);
                printf("\n");
                break;
            case 2:
                printf("Enter height (-1 to exit): ");
                scanf("%d %d",&cm1 ,&cm2);
                if(cm1==-1 && cm2==-1)
                {
                    printf("\n");
                    printf("Bye! coding by ID 407410116");
                    return 0;
                }
                ListBMIRanges(cm1,cm2);
                printf("\n");
                break;
            case 3:
                printf("Enter height (-1 to exit ): ");
                scanf("%d",&height);
                printf("\n");
                if(height==-1)
                {
                    printf("\n");
                    printf("Bye! coding by ID 407410116");
                    return 0;
                }
                DrawFourVerticalTriangle(height);
                printf("\n");
                break;
            case 4:
                printf("Enter N (-1 to exit): ");
                scanf(" %04d",&N);
                if(N==-1)
                {
                    printf("\n");
                    printf("Bye! coding by ID 407410116");
                    return 0;
                }
                printf("encode(%d) = %d\n",N ,encode(N));
                printf("\n");
                break;
            case 5:
                printf("Enter N (-1 to exit): ");
                scanf(" %04d",&N);
                if(N==-1)
                {
                    printf("\n");
                    printf("Bye! coding by ID 407410116");
                    return 0;
                }
                printf("decode(%d) = %d\n",N ,decode(N));
                printf("\n");
                break;
        }
    }
    return 0;
}
