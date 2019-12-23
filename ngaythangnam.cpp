#include<stdio.h>
#include<conio.h>
#include<Windows.h>

//viet ham

int nhapdulieu(int &thang)
{
	
	//0< thang <13
	
	do{
		printf("\nnhap thang thu:\n");
		scanf("%d",&thang);
		if(thang<0||thang>12)
		{
			printf("thang ban nhap vao khong hop le");
		
		}
	}
	while(thang<0||thang>12);
	
}
int xuly(int thang)
{
	if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)
	{
		printf("\nthang %d co 31 ngay",thang);
	}
	else if(thang==4||thang==6||thang==9||thang==11)
	{
		printf("\nthang %d co 30 ngay",thang);
	}
	else if(thang==2)
	{
		printf("\nthang %d co 28 hoac 29 ngay",thang);
	}
	
}

int main()
{
	
	int thang,tieptuc;
	//nhap vao thang ,xuat ra so ngay cua thang do
	
	
//	printf("nhap thang thu \n");
//	scanf("%d",&thang);
	//goi ham
	quaylai:nhapdulieu(thang);
	xuly(thang);
	
	
	
	printf("\nban co muon thuc hien lai chuong trinh nay khong (y/n)");
	tieptuc=getch();
	if(tieptuc=='y'||tieptuc=='Y')
	{
	 system("cls");//lau sach cua so khai bao thu vien #include <Windows.h>
	 goto quaylai;
	}
	
	
}
