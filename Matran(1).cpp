#include<stdio.h>

#define M 5 //dong
#define N 5 //cot

void NhapMaTran(int a[][5],int dong,int cot)
{
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			printf("a[%d,%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void XuatMaTran(int a[][5],int dong,int cot)
{
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
int  MaTran0(int a[][N],int dong,int cot)
{
	//Ma tran 0 la ma tran ma cac phan tu toan la so 0
	
	int kq=0;// dat co hieu kq=0;
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			if(a[i][j]==0) kq=1;
			
		}
	}
	return kq;
}
int MaTranDoiXung(int a[][N],int dong,int cot)
{
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			if(a[i][j]!=a[j][i])
			{
				return 0;
			}
		}
	}
	return 1;
}
int MaTranDonVi(int a[][N],int dong,int cot)
{
	//Ma tran don vi la ma tran tren duong cheo chinh la 1,cac phan tu con lai la 0
	/*
	     0 1 2
	     
	 0   1 0 0
	 1   0 1 0
	 2   0 0 1
	*/

	

//kiem tra ma tran co phai ma tran don vi hay khong??

	int OK=1; //dat linh canh OK
	
//duyet ma tran
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			//xet duong cheo
			//neu duong cheo thi i va j giong nhau(0,0) (1,1) (2,2) (3,3) ,...
			if(i==j && a[i][j]!=1)
			{
				OK=0;
			}
			if(i!=j && a[i][j]!=0)
			{
				OK=0;
			}
		}
		
	}
	return OK;
}
int TongMaTran(int a[][N],int dong,int cot)
{
	int tong=0;
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			tong+=a[i][j];
		}
	}
	return tong;
}
void MaxMaTran(int a[][N],int dong,int cot)
{
	
	int max=a[0][0];//ran gia tri ban dau cho max
	for(int i=0;i<dong;++i)
	{
		 //ran gia tri ban dau cho max
		for(int j=0;j<cot;++j)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	
	printf("%d",max);
}
void MinMaTran(int a[][N],int dong,int cot)
{
	
	int min =a[0][0];
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot ;++j)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
			}
		}
	}
	printf("%d",min);
}
int TongPhanTuTrenDuongCheoChinh(int a[][N],int dong,int cot)
{
	
	//khi noi toi duong cheo chinh thi phai la ma tran hinh vuong vd:3x3 4x4
	int tong=0;
	for(int i=0;i<dong;++i)
	{
		
		
			tong+=a[i][i];
		
	}
	return tong;
}
int TongPhanTuTrenDuongCheoPhu(int a[][N],int dong,int cot)
{
	int tong=0;
	for(int i=0;i<dong;++i)
	{
		tong+=a[i][dong-1-i]; //dung dong hoac cot deu duoc vi day la ma tran hinh vuong
	}
	return tong;
}
int PhanTuMaxTrenDuongCheoChinh(int a[][N],int dong,int cot)
{
	int max=a[0][0];
	for(int i=1;i<dong;++i)
	{
		
		
		if(a[i][i]>max)
		{
			max=a[i][i];
		}
	}
	return max;
}
int KiemTraSoHoanChinh(int n)
{
	int s=0;
	for(int i=1;i<n;++i)
	{
		if(n%i==0)
		{
			s+=i;
		}
	}
	if(s==n) 
	{
		return 1;
	}
	return 0;
}
int TongCacSoHoanChinh(int a[][N],int dong,int cot)
{
	int tong=0;
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			if(KiemTraSoHoanChinh(a[i][j]))
			{
				tong+=a[i][j];
			}
		}
	}
	return tong;
}
int TongCacPhanTuNgoaiBien(int a[][N],int dong,int cot)
{
	/* vi du ma tran
	     
		 0 1 2 3
	     
	 0   2 1 1 6
	 1   0 5 0 2 
	 2   1 4 3 1
	 
	*/
	
	//o ma tran tren thi 5 0  la phan tu trung tam
	
	//ta tinh tong tat ca phan tu truoc (1)
	//roi tinh tong cac phan tu trung tam (2)
	//sau do (1)-(2)
	
	
	/*
	int kq1=TongMaTran(a,3,4);
	int kq2=TongCacPhanTuTrungTam(a,3,4);
	printf("tong cac phan tu ngoai bien la : %d",kq1-kq2);
	*/
	
}

int TongCacPhanTuTrungTam(int a[][N],int dong,int cot)
{
	
	
	
	//3dong 4cot
	
	
	
	//vong lap nay se xet cac cap trong ma tran tren 
	
	//    (1,1)(1,2) (2,1)(2,2)
	int tong=0;
	for(int i=1;i<dong-1;++i)
	{
		for(int j=1;j<cot-1;++j)
		{
			tong+=a[i][j];
		}
	}
	return tong;
}
void XuatCacPhanTuNgoaiBien(int a[][N],int dong,int cot)
{
	//lay vi du cua tinh tong cac phan tu ngoai bien
	
	/* vi du ma tran
	     
		 0 1 2 3
	     
	 0   2 1 1 6
	 1   0 5 0 2 
	 2   1 4 3 1
	 
	 3dong 4cot
	 
	*/
	
	for(int i=0;i<cot;++i)  //xuat cac phan tu o dong dau tien 2,1,1,6
	{
		printf("%5d",a[0][i]);
	}
	for(int i=1;i<dong-1;++i)  //xuat cac phan tu o cot cuoi cung ben phai 2
	{
		printf("%5d",a[i][cot-1]);
	}
	for(int i=cot-1;i>=0;--i) //xuat cac phan tu o dong cuoi cung 1 3 4 1
	{
		printf("%5d",a[dong-1][i]);
		
	}
	for(int i=1;i<dong-1;++i) //xuat cac phan tu o cot dau tien
	{
		printf("%5d",a[i][0]);
	}
	
}
int KiemTraPhanTuCoTangDanTheoDuongCheoChinh(int a[][N],int dong,int cot)
{
	for(int i=0;i<dong-1;++i)
	{
		
		if(a[i][i]<a[i+1][i+1])
			{
				return 0;
			}
		
	}
	return 1; //con lai thi tra ve 1
	
}
int main ()
{
	//khai bao ma tran 
	int a[M][N];
	
	NhapMaTran(a,2,3);
	XuatMaTran(a,2,3);
	//test ham
//	int kq=MaTranDoiXung(a,4,4);
//	printf("%d",kq);
	
//	int chon;
//	
//	//tao MENU lua chon 
//	printf("1.Nhap Ma Tran\n");
//	printf("2.Xuat Ma Tran");
//	
//	while(1)
//	{
//		printf("\nchon chuc nang");
//		scanf("%d",&chon);
//		switch(chon)
//		{
//			case 1:NhapMaTran(a,3,3);break;
//			
//		}
//	}
	
	
}
