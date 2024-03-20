#include<stdio.h>
int main()
{
	int a,b,c,d,total;
	char grade;
	printf("enter maths:");
	scanf("%d",&a);

	printf("enter chemistry:");
	scanf("%d",&b);

	printf("enter physics:");
	scanf("%d",&c);

	printf("enter biology:");
	scanf("%d",&d);	

	total=a+b+c+d;
	if(total>75)
	{
		grade='A';
	}
	else if((total>60)&&(total<75))
	{
		grade='B';
	}
	else if((total>50)&&(total<60))
	{
		grade='C';
	}
	
	else
	{
		grade='D';
	}

	switch(grade)
	{
		case 'A':
			printf("Excellent %d\n",total);
			break;
		case 'B':
			printf("Very good %d\n",total);
			break;
		case 'C':
			printf("good %d\n",total);
			break;
		default:
			printf("Failed %d\n",total);
	}
}
