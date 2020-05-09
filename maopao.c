#include<stdio.h>
#include<stdlib.h>


void paixu(int arr[],int nelnght)
{
	int i ,j ;
int n;
	for(i = 0;i<nelnght-1;i++)//比较趟数
	{
		n = 0;
		
		for(j = 0;j<nelnght-i-1;j++)//每个数进行比较
		{
			if(arr[j]>arr[j+1])
			{
				arr[j] = arr[j]^arr[j+1];
    			arr[j+1] = arr[j]^arr[j+1];
				arr[j] = arr[j]^arr[j+1];	
				n = j+1;//标记
			}
				
		}
		if(n == 0)
		{
			return ;
		}
		
				i = nelnght-n-1;
		
	}
	
	
}
void prinf(int arr[],int nelnght)
{
	int i;
	for(i = 0;i<nelnght;i++)
	{
	printf("%d  ",arr[i])	;
	}
}



int main()
{
	
int arr[] = {8,6,9,0,10,13,99,3,4,5,89};
paixu(arr,sizeof(arr)/sizeof(arr[0]));

prinf(arr,sizeof(arr)/sizeof(arr[0]));

printf("\n");
return 0;

}

