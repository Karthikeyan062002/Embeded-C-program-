  #include<stdio.h>
  int main()
{
	int arr[5]={10,20,30,40,50};
	int i,sum=0;
	for(i=0;i<5;i++)
     {
	     printf("%d",arr[i]);
     }
	for(i=0;i<sum;i++)
	{
		sum=sum+arr[i];
		printf("%d",sum);
	}
	return 0;
}
