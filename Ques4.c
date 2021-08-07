#include <stdio.h>
void reverse(int arr[],int left,int right)
{
	while(left<right)
	{
		int temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		left++;
		right--;
	}

}
int main()
{

	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

}