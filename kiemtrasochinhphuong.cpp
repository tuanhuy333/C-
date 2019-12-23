#include<stdio.h>
#include<conio.h>
#include<math.h>

//viet ham

bool kiemtra(int n)
{

	float kq=sqrt(n);
	if(kq==(int) kq){
		return true;
//		printf("la so chinh phuong");

	}
	else 
	{
		return false;
//		printf("ko phai so chinh phuong");
	}
	
	
}
int main ()
{
	
	//so chinh phuong la so co can bac hai la so nguyen
	int n;
	printf("nhap vao so n de kiem tra co phai so chinh phuong hay ko :");
	scanf("%d",&n);
	
	if(kiemtra(n))
	{
		printf("la so chinh phuong");
	}
	else
	{
		printf("ko phai so chinh phuong");
	}
	
//	return kiemtra(n);
	
	getch();
	return 0;
	
}

