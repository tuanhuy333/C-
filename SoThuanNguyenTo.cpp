#include<stdio.h>
#include<math.h>
int SNT(int n)
{
	if(n<2) 
	{
		return 0;
	}
	for(int i=2;i<=sqrt(n);++i)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
	
}
int DemChuSo(int n)
{
	int demso=0;
	while(n!=0)
	{
		//chuso=n%10;
		demso++;
		n/=10;
	}
	return demso;
}
int KTtungchuso(int n)
{
	//so do phai co tat cac cac chu so deu la SNT

	int dem=0,chuso;
	int sochuso=DemChuSo(n);
	while(n!=0)
	{
		chuso=n%10;
		if(SNT(chuso)==1)
		{
			dem++;
		}
		n/=10;
	}
	if(dem==sochuso)
	{
		return 1;
	}
	else {
		return 0;
	}
}
int TongChuSo(int n)
{
	int chuso,tong=0;
	while(n!=0)
	{
		chuso=n%10;
		tong+=chuso;
		n/=10;
	}
	return tong;
}
int SoThuanNguyenTo(int n)
{
	//so thuan nguyen to la so co cac chu so cua no la so nguyen to
	//va tong cac chu so do cung la so nguyen to
	
	int tong=TongChuSo(n);
	if(n==2||n==3||n==5||n==7) 
	{
		return 0;
	}
	if(KTtungchuso(n)==1 && SNT(tong)==1)
	{
		return 1;
	}

	
	
}
int main()
{
	
	
	
	for(int i=1;i<1000;++i)
	{
		if(SoThuanNguyenTo(i)==1)
		{
			printf("%5d",i);
		}
	}
	
	
	
}
