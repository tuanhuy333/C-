#include<stdio.h>
void NhapMang(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

int DemPhanTu(int x,int n,int a[])
{
	int dem=0;
	
	for(int i=0;i<n;++i)
	{
		if(a[i]==x) dem++;
	}
	return dem;
}
int  PhanTuNhieuNhatTrongMang(int b[],int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		b[i]=DemPhanTu(a[i],n,a);
	}
	int max=b[0],vt=0;
	for(int i=0;i<n;++i)
	{
		if(b[i]>max)
		{
			max=b[i];
			vt=i;
		}
		
		
	}
	return a[vt] ;
}

int main()
{
	int n,a[50],b[50];
	printf("nhap so phan tu n cua mang ");
	scanf("%d",&n);
	
	NhapMang(n,a);
	int kq=PhanTuNhieuNhatTrongMang(b,n,a);
	printf("%d",kq);
	return 0;
	
}
