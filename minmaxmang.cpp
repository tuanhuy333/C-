#include<stdio.h>

void nhapmang(int n,int array[])
{
	
	for(int i=0;i<n;++i)
	{
	
		
		printf("a[%d]=",i);
		scanf("%d",&array[i]);
		
	}
}
int minmang(int n,int array[])
{
	int min=array[0];//dat min bang 1 phan tu trong mang
	for(int i=0;i<n;++i)
	{
	
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	return min;
}
int maxmang(int n,int array[])
{
	int max=array[0];
	for(int i=0;i<n;++i)
	{
		
		
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	return max;
}
int main()
{
	int n,array[30];
	printf("nhap n");scanf("%d",&n);
	
	//test 
	
	
	
	//
	
	
	nhapmang(n,array);
	
	int kq1=minmang(n,array);
	int kq2=maxmang(n,array);
	
	printf("min cua cac phan tu trong mang la %d",kq1);
	printf("\nmax cua cac phan tu trong mang la %d",kq2);

	
}
