#include<stdio.h>
void swap(int a,int b)
{
	int temp=a;
        a=b;
	b=temp;
	printf("a=%d and b=%d",a,b);
 

}
int main()
{
	int a,b;
	printf("enter the num \n");
	scanf("%d %d",&a,&b);
	printf("a=%d and b=%d\n",a,b);
	swap(a,b);
       
        return 0;

}
