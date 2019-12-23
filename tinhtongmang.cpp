#include<stdio.h>
#include<conio.h>

void nhapmang(int &n,int a[])
{
	printf("nhap cac phan tu trong mang");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
	
		printf("\na[%d]=%d",i,a[i]);
	}
}
int tinhtong(int n,int a[])
{
	int s=0;
	for(int i=0;i<n;++i)
	{
		s+=a[i];
		
	}
	return s;
}
int tongsochan(int n,int a[])
{
	int s=0;
	for(int i=0;i<n;++i) //khai bao vong lap de lay tung phan tu cua mang
	{
		if(a[i]%2==0&&a[i]>0)
		{
			s+=a[i];
		}
	}
	return s;
}
int tongsoam(int n,int a[])
{
	int s=0;
	for(int i=0;i<n;++i)
	{
		if(a[i]<0)
		{
			s+=a[i];
		}
	
		
	
	
	}
	return s;
}
int main()
{
	int a[50],n;
	nhapmang(n,a);
	
	xuatmang(n,a);
	
	int s1=tinhtong(n,a);
	
	int s2=tongsochan(n,a);
	
	int s3=tongsoam(n,a);
	
	printf("\n\ntong=%d",s1);
	printf("\n\ntong so chan=%d",s2);
	printf("\n\ntong so am=%d",s3);
	
	
	
	
	getch();//doi nhap mot cai gi do xong ket thuc chuong trinh
	
}
