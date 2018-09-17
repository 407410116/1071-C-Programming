#include<stdio.h>
int main(){

	printf("Enter Temperature in c:");
	float C,F;
	scanf("%f",&C);
	F=C*9/5+32;
	printf("%.1fC=%.1fF\n",C,F);
	
	printf("Enter Temperature in F:");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("%.1fF=%.1fC",F,C);
}

/*Enter temperature in C: 20.5
20.5 C = 68.9 F

Enter temperature in F: 80.5
80.5 F = 26.9 C */

