#include<stdio.h>
void nhapmang(int &n,int a[])
{
	printf("nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
}
int tongmang(int n,int a[])
{
	int tong=0;
	for(int i=0;i<n;++i)
	{
		tong+=a[i];
	}
	return tong;
}

int main()
{
	int n,a[20];
	int kq=tongmang(n,a);
	nhapmang(n,a);
	printf("tong=%d",kq);
	
}
