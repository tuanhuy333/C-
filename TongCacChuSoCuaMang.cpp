#include<stdio.h>
void NhapMang(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}


int TongCacChuSoCuaMang(int n,int a[])
{
	int chuso,tong=0;
	for(int i=0;i<n;++i)
	{
		while(a[i]!=0)
		{
			chuso=a[i]%10;
			tong+=chuso;
			a[i]/=10;
		}
		
	}
	return tong;
}
int main()
{
	//tinh tong tat ca cac chu so trong mang
	int a[50],n;
	printf("nhap so phan tu n cua mang ");
	scanf("%d",&n);
	
	NhapMang(n,a);
	int kq=TongCacChuSoCuaMang(n,a);
	printf("\n%d",kq);

}
