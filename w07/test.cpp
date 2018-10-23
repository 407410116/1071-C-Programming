#include <stdio.h>
                3         A         B         C
void tower1(int n, char from, char aux, char to)
{
  if(n==1)
    printf("%c -> %c\n", from,to);
  else
  {
    tower1(n-1,from,to,aux);
    printf("%c -> %c\n", from,to);
    tower1(n-1,aux,from,to);
  }
}
/*
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
*/


/*
n!=1>>>>else1>>>>tower1(2,A,C,B)>>>>n!=2>>>>esle2>>>>
tower1(1,A,C,B)>>>>n=1>>>>
////printf(A -> C)
tower1(2,A,C,B)>>>>n!=1>>>>else3>>>>tower1(1,A,B,C)>>>>
n=1>>>>
////printf(A -> B)
tower1(2,C,A,B)>>>>n!=1>>>>else4>>>>tower1(1,C,B,A)>>>>
n=1>>>>
////printf(C -> B)
tower1(2,A,C,B)

*/
