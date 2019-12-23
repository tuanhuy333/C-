#include<stdio.h>
#include<conio.h>

int in(int n)
{
	int dem=0;
	for(int i=2;i<=10000;i++)
	{
		int f=1;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=0;
			}
		}
		if(f==1)
		{
			dem++;
			if(dem<=n)
			{
				printf("%5d",i);
			}
		}
	
	}
	
}

int main()
{
	int n;
	printf("nhap n (n la so so nguyen to dau tien muon hien thi)");
	scanf("%d",&n);
	in(n);
	
}
