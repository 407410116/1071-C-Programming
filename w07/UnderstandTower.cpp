#include<stdio.h>
void tower1(int n, char from, char aux, char to)
{
    if(n==1)
    {
        printf("   %c -> %c 1\n", from, to);
    }
    else
    {
        printf("%d,%c,%c,%c  3\n\n",n-1,from,to,aux);
         tower1(n-1, from, to, aux);
//  -------------------------------------------------------------------------(3,A,B,C)
        printf("**\n");  //return here                                

         printf("%d  %c -> %c 2\n\n\n", n-1, from, to);  

        printf("%d,%c,%c,%c  4\n\n",n-1,aux, from, to);
         tower1(n-1, aux, from, to);
//  --------------------------------------------------------------------------(2,A,B,C)
        printf("*\n");  //return here
    }
}
int main()
{
    tower1(3, 'A', 'B', 'C');
    printf("\n\n");
}
