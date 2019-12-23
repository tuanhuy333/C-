#include<stdio.h>
void NhapMang(int &n,int a[])//tham chieu n
{
	printf("nhap so phan tu n");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
}
void XoaPhanTu(int &n,int a[],int k)
{
	printf("nhap vi tri k muon xoa");
	scanf("%d",&k);
	for(int i=k;i<n;++i)
	{
		a[i]=a[i+1];
		
	}
	n--;
}
void ChenPhanTu(int &n,int a[],int k,int x)
{
	
	
	//chen phan tu x vao vi tri k
	
	for(int i=n;i>0;--i)
	{
		a[i]=a[i-1];
		
	}
	a[k]=x;
	n++;
}
void XuatMang(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		printf("%5d",a[i]);
	}
}
int main()
{
	int n,a[50],k,x;
	
	NhapMang(n,a);
		
	printf("nhap phan tu x va vi tri k muon chen vao mang");
	scanf("%d%d",&x,&k);
	ChenPhanTu(n,a,k,x);
	XoaPhanTu(n,a,k);
	
	XuatMang(n,a);
	
}
