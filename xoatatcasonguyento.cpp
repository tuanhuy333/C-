#include<stdio.h>
void nhap(int &n,int a[])
{
	printf("nhap so phan tu n");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

//kiem tra so nguyen to

int ktsonguyento(int &n)
{

	if( n<2) return 0;
	for(int i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			return 0;
		}
		
	}
	return 1;
}

//xoa tat ca so nguyen to

void xoa(int &n,int a[],int k)
{
	for(int i=k;i<n;i++)
	{
		a[i]=a[i+1];
		
	}
	n--;
}
void xoasonguyento(int &n,int a[])
{
	for(int i=0;i<n;++i)
	{
	
		if(ktsonguyento(a[i])==1)
		{
			xoa(n,a,i);
			i--;
			
		}
	}
}
void xuat(int &n,int a[])
{
	for(int i=0;i<n;++i)
	{
		printf("%5d",a[i]);
	}
	
}
int main()
{
	
	int n,a[30];
	//goi ham
	
	nhap(n,a);
	xoasonguyento(n,a);
	xuat(n,a);
	
}
