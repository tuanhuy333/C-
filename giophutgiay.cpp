#include<stdio.h>
int main()
{
	int gio,phut,giay,sogiay;
	printf("nhap vao so giay");
	scanf("%d",&sogiay);
	gio=sogiay/3600;
	phut=(sogiay%3600)/60;
	giay=(sogiay%3600)%60;
	printf("%dh%dm%ds",gio,phut,giay);
}
