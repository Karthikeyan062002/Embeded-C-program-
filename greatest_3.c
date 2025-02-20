#include<stdio.h>
 int main()
{
	int a,b,c;
	printf("enter the three num\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(b<a)
	{
	if(c<a)
	{
	printf("a is greatest value:");
  }
	}
	else if(c<b)
	{
	if(a<b)
	{
	printf("b is greatest value:");
	}
	}
	else
	{
		printf("c is greatest value:");
	}
	return 0;
}
