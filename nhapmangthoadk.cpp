#include<stdio.h>


void nhapmang(int &n,int array[])
{
	
	//ko can nhap n tai day
	//vi da yeu cau nhap n tai ham main
	for(int i=0;i<n;++i)
	{
		printf("a[%d]=\n",i);
		scanf("%d",&array[i]);
		
		
	}
}

void xuatmang(int n,int array[])
{
	
	printf("cac phan tu vua nhap la:\n");
	for(int i=0;i<n;++i)
	{
		printf("a[%d]=%d",i,array[i]);
	}
}

int main ()
{
	int n,array[30];
	int a=1;int b=5;
	do{
		printf("nhap n");
		scanf("%d",&n);
	}
	while(n<a||n>b);
	nhapmang(n,array);
	xuatmang(n,array);
	
	
}
