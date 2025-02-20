#include<stdio.h>
int main()
{
	int arr[]={5,7,4,15,2};
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	int max=arr[0];
	for(int i=0;i<5;i++)
	{
	    if(arr[i]>max)
	    {
		    max=arr[i];
	    }
	}
	printf("maximum element %d\n",max);
}
