#include<stdio.h>
#include<conio.h>

//ham kiem tra

int kiemtra(int n)
{
	//so do =abc;
	int a,b,c;
	a=n/100;
	b=(n/10)%10;
	c=n%10;
	int kq=0;

	if(a*a*a+b*b*b+c*c*c==n)
	{
		kq=1;
//	   printf("right");
	}
//	else{printf("wrong");

     return kq;
}
int main()
{
	int n;
	printf("nhap so de kiem tra");
	scanf("%d",&n);
	
	//goi ham
	return kiemtra(n);
	
//	getch();
//	return 0;
	
}

