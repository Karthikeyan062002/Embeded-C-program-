#include<stdio.h>
int call(int,int);
int main()
{
	int a,b,cal;
	printf("enter the two num\n");
	scanf("%d%d",&a,&b);
        cal=call(a,b);
	printf("big is %d",cal);
	return 0;
}
  int call(int x,int y)
{
   return x<y?x:y;
}
