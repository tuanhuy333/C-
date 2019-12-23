#include<stdio.h>
#include<conio.h>

float tinh(int n,float x)
{
	int tu=1,mau=0;
	float dau=-1;
	float s=1;
	for(int i=1;i<=n;i++)
	{
		tu*=x; 
		mau=i+i+1;
		s+=dau*tu/mau;
		dau=-dau;
		
	}
	printf("result %f",s);
	
	
}
int main()
{
	
	//de bai : 1-x/(1+2)+x^2/(2+3) +...+(-1)^n * x^n/(n+(n+1)
	
	int n;
	float x;
	printf("\nnhap n");
	scanf("%d",&n);
	printf("\nnhap x");
	scanf("%f",&x);
	tinh(n,x);
	
}
