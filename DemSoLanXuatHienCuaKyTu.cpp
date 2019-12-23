#include<stdio.h>
int Dem1KyTu(int n,char a[],char x)
{
	int dem=0;
	for(int i=0;i<n;++i)
	{
		if(a[i]==x) dem++;
	}
	return dem;
}

void DemSoLanXuatHienCuaKyTu(int n,char a[])
{
	for(char i='A';i<='Z';++i)
	{
		printf("\n%c %d",i,Dem1KyTu(n,a,i));
	}
}
int main()
{
	char a[]="KKi Nguoi Lon Co Don";
	DemSoLanXuatHienCuaKyTu(20,a);

	
	
	
}
