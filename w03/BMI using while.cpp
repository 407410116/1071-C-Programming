#include<stdio.h>
int main()
{
    double weight,height,BMI;
	double m;
	
	printf("Enter weight(kg) and height(cm):");
	scanf("%lf %lf",&weight,&height);
	m=height/100;
	BMI=weight/(m*m);
	while(weight>0&&height>0)
	{
		if(BMI<18.5)  
	    {
        printf("BMI:%lf,�魫�L��\n",BMI);
        }
		else if(BMI>=18.5&&BMI<24)
		{
			printf("BMI:%lf,���`�d��\n",BMI);
		}
		else if(BMI>=24&&BMI<27)
		{
			printf("BMI:%lf,�L��\n",BMI); 
		}
		else if(BMI>=27&&BMI<30)
		{
			printf("BMI:%lf,���תέD\n",BMI); 
		}
		else if(BMI>=30&&BMI<35)
		{
			printf("BMI:%lf,���תέD\n",BMI); 
		}
		else if(BMI>=35)
		{
			printf("BMI:%lf,���תέD\n",BMI); 
		}
		printf("Enter weight(kg) and height(cm):");
	    scanf("%lf %lf",&weight,&height);
	    m=height/100;
	    BMI=weight/(m*m);
	}
}
