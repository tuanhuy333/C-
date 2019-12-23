#include<stdio.h>

void NhapMaTran(int a[10][10],int dong,int cot)  //dong x cot
{
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
}

void XuatMaTran(int a[10][10],int dong,int cot) //dong x cot
{
	for(int i=0;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			printf("%5d",a[i][j]);
		
		}
			printf("\n");
	}
	


}

void XoaDongMaTran(int a[10][10],int dongmuonxoa,int &dong,int cot)
{
	
	printf("nhap dong muon xoa ");
	scanf("%d",&dongmuonxoa);
	
	
	for(int i=dongmuonxoa;i<dong;++i)
	{
		for(int j=0;j<cot;++j)
		{
			a[i][j]=a[i+1][j];
			
		}
		
	}
	dong--;
}
void XoaCotMaTran(int a[10][10],int cotmuonxoa,int dong,int &cot)
{
	
	printf("nhap cot muon xoa");
	scanf("%d",&cotmuonxoa);
	
	for(int i=0;i<dong;++i)
	{
		for(int j=cotmuonxoa;j<cot;++j)
		{
			a[i][j]=a[i][j+1];
		}
	}
	cot--;
}
int main()
{
	int a[10][10],dong,cot;
	int dongmuonxoa,cotmuonxoa;
	
	printf("nhap dongXcot ");
	scanf("%d%d",&dong,&cot);
	
	NhapMaTran(a,dong,cot);
	XuatMaTran(a,dong,cot);
	
	XoaCotMaTran(a,cotmuonxoa,dong,cot);
	
	XuatMaTran(a,dong,cot);
	
}
