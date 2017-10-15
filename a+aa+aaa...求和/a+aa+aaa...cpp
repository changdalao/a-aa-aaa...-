#include<stdio.h>
int main()
{
	int i=0;
	int a=0,num=0;
	int sum=0;
	printf("ÊäÈë»ùÊý>");
	scanf("%d",&num);
	for(i=0;i<5;i++)
	{
		a=a*10+num;
		sum=sum+a;
	}
	printf("%d\n",sum);
	return 0;
}