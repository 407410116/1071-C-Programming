#include<stdio.h>

int main()
{
    int a,b;
    int A,B,C,D,E;

        printf("Enter two integers: ");
        scanf("%d %d",&a ,&b);

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

    return 0;
}
