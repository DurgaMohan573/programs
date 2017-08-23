#include<stdio.h>
void main()
{
	int i=2,n;
	printf("Enter A Number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			printf("Not A Prime Number");
		}
		else

