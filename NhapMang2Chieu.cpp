#include<stdio.h>

#define M 5
#define N 5

//nhap mang 2 chieu

void NhapMang2Chieu(int a[][N],int dong,int cot) //dong bo trong,cot nhap N mac dinh
{
	//dung 2 vong lap de quet het bang
	
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			printf("a[%d,%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

void XuatMang2Chieu(int a[][N],int dong ,int cot)
{
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			printf("%5d",a[i][j]);
			printf("\n");
		}
	}
}
int main ()
{
	//khai bao mang 2 chieu 
	int a[M][N];
	
	
	NhapMang2Chieu(a,2,3);
	XuatMang2Chieu(a,2,3);
	
}
