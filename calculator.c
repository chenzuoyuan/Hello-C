#include<stdio.h>
int main()
{
	double number1=0.0;
	double number2=0.0;
	char operation=0;

	printf("\nEnter the calculation\n");
	scanf("%lf%c%lf",&number1,&operation,&number2);

	switch(operation)
	{
		case '+':
			printf("=%7.2lf\n",number1+number2);
			break;
		case '-':
			printf("=%7.2lf\n",number1-number2);
		case '*':
			printf("=%7.2lf\n",number1*number2);
		case '/':
			if(number2==0)
			printf("\n\n\aDivinsion by zero error!\n");
			else
			printf("=%7.2lf\n",number1/number2);
			break;
		case '%':
			if((long)number2==0)
			printf("\n\n\aDivision by zero error!\n");
			else
			printf("=%ld\n",(long)number1%(long)number2);
			break;
		default:
			printf("\n\n\aDivision by zeio error!\n");
			break;
	}
	return 0;
}
