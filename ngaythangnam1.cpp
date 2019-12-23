#include<stdio.h>
#include<conio.h>
#include<Windows.h>


int nhapdulieuvakiemtra(int &ngay,int &thang,int &nam)
{
	//nhap du lieu va kiem tra co hop le ko?
	
	nhaplai:printf("\nnhap ngay:");
	scanf("%d",&ngay);
	if(ngay<1||ngay>31)
	{
		printf("ban nhap ngay khong hop le!!!");
		goto nhaplai;
	}
	
	nhaplai1:printf("\nnhap thang:");
	scanf("%d",&thang);	
 if(thang<1||thang>12)
	{
		printf("ban nhap thang khong hop le!!!");
		goto nhaplai1;
	}
	
	nhaplai2:printf("\nnhap nam:");
	scanf("%d",&nam);
	
 if(nam<1)
	{
		printf("ban nhap nam khong hop le!!!");
		goto nhaplai2;
	}
	
	else if(thang==4||thang==6||thang==9||thang==11)
	{
		if(ngay>=31)
		{
			printf("ban nhap ngay khong hop le!!!vi thang 4,6,9,11 co 30 ngay");
			goto nhaplai;
			
		}
	}
	else if(thang==2)
	{
		if(ngay==30||ngay==31)
		{
			printf("ban nhap ngay khong hop le!!!vi thang 2 chi co the co 28 hoac 29 ngay thoi");
			goto nhaplai;
		}
	}
	if(nam%400==0) //nam nhuan  thang 2 co 29 ngay
	{
		if(thang==2)
		{
			if(ngay==28){
				printf("ban nhap ngay khong hop le vi day la nam nhuan");
				goto nhaplai;
			}
		}
	}
	if(nam%4!=0)
	{
		if(thang==2)
		{
			if(ngay==29)
			{
				printf("ban nhap ngay khong hop le vi day khong phai nam nhuan");
			}
		}
	}
}

int xuatdulieuvuanhap(int ngay,int thang,int nam)
{
	printf("\nban da nhap ngay %d,thang %d,nam %d",ngay ,thang,nam);
}

int main()
{
	/*
	nhap vao ngay,thang,nam 
	kiem tra hop le
	in ra ngay truoc va sau ngay do
	*/
	
	int ngay,thang,nam;
	nhapdulieuvakiemtra(ngay,thang,nam);
    xuatdulieuvuanhap(ngay,thang,nam);
	
}
