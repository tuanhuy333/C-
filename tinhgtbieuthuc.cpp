#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

//viet ham

float tinh(int n,float x)
{
	float tu=1;
	float mau=0;
	float s=0;
	float dau=1;
	int i;
	for(i=1;i<=n;++i)
	{
		tu*=x;
		mau+=1.0/i;
		s+=dau*tu/mau;
		dau=-dau;
	}
    printf("result=%f",s);
	

}
int main()
{
	// S(n,x)=x/1 + x^2/(1+1/2) +...+x^n/(1+1/2+...+1/n)
	
	int n;
	float x;
	printf("nhap n");
	scanf("%d",&n);
	printf("\nnhap x");
	scanf("%f",&x);
	
	
	
	//goi ham
    return tinh(n,x);
    
    
    getch();
    return 0;


	
	
}
