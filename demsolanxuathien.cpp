#include<stdio.h>
void nhap(int &n,int a[])
{
	for(int i=0;i<n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
int demsolanxuathien(int n,int a[],int &x)
{
	
	printf("nhap phan tu muon dem");
	scanf("%d",&x);
	
	int dem=0;
	
	for(int i=0;i<n;++i)
	{
		if(a[i]==x)
		{
			dem++;
		}
		
	}
	return dem;
}
int main()
{
	int n,a[30],x;
	printf("nhap so phan tu n");
	scanf("%d",&n);
	
	nhap(n,a);
	int solan=demsolanxuathien(n,a,x);
	
	printf("co %d phan tu %d trong mang",solan,x);
	
}
