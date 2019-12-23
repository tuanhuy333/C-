#include<stdio.h>
int nhap(int &n)
{
	printf("nhap n");
	scanf("%d",&n);
}
int inrasodaonguoc(int n)
{
	int m=n;
	int tong=0;
	while(m!=0)
	{
		tong=tong*10+m%10;
		m/=10;
	}
	return tong;
}
int main()
{
//	int n;
//	nhap(n);
//	inrasodaonguoc(n);

	int n,box=0,ChuSo;
	printf("nhap so n :");
	scanf("%d",&n);
	
	
////	while(n!=0)
////	{
////		
////		box=box*10+n%10;
////		n/=10;
////		
////		
////		
////		
////	}
////	printf("%d",box);

	int kq=inrasodaonguoc(n);
	printf("%d",kq);
}
