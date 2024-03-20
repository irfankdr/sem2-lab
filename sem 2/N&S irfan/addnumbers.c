#include<stdio.h>
int main()
{
	int n,a[50],sum;
	printf("Enter the elements in the array");
	scanf("%d",&n);
	printf("Enter the numbers :\n");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int j=0;j<n;j++)
		{
			sum=sum+a[j];
		}
	
	printf("The Sum is :%d",sum);
}
		
	
