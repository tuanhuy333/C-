#include<stdio.h>
int nhap(int &n)
{
	printf("nhap n");
	scanf("%d",&n);
}

int daonguocchuso(int a[],int n)
{
	int i=0;
	//cac bai ve so thi dung while (n!=0)
	while(n!=0)
	{
		a[i]=n%10;
		n/=10;
		i++;
	}
	for(int k=0;k<i;++k)
	{
		printf("%d",a[k]);
	}
}
int main()
{
	int a[10];
	int n;
	nhap(n);
	daonguocchuso(a,n);
	
	
}
