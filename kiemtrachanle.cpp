#include<stdio.h>
#include<conio.h>


//ham nhap du lieu
int nhap(int &n)
{
	printf("\nnhap n de kiem tra");
	scanf("%d",&n);
	
}

//ham kiem tra
int kiemtra(int n)
{
	if(n%2==0) return 1;
	return 0;
}

int main()
{
	int n;
	nhaplai:nhap(n);
	
	
	if(kiemtra(n))
	{
		printf("\n%d la so chan",n);
	}
	else {
		printf("\n%d la so le",n);
	}
	printf("\nBan co muon thuc hien lai chuong trinh ko (y/n)\n");
	int ykien=getch();
	if(ykien =='y'||ykien=='Y')
	{
		goto nhaplai;
	}
	
}
