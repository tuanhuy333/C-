#include<stdio.h>
#include<conio.h>
#include<math.h>


//viet ham
int KiemTraSoNguyenTo(int n)
{
	int dem=0;
	if(n<2)
	{
		return 0;
	}
	
	for(int i=1;i<=n;++i)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
	{
		return 1;
	}
}
int /*co the dung kieu bool*/ kiemtra(int n) //day la kieu bool tra ve ket qua true or false
{
	
//       if (n < 2)
//              return 0;
//       else if (n == 2)
//              return 1;
//       else if (n % 2 == 0)
//              return 0;
//       for (int i = 3; i <= sqrt(n); i += 2)
//              if (n % i == 0)
//                     return 0;
//       return 1;

	if(n<2)
	{
		return 0;
//		return false;    neu dung kieu bool
		
	}
	
	for(int i=2;i<=sqrt(n);++i)
	{
		if(n%i==0)
		{
			return 0;
//			return false;
		}
	
	}
	return 1;

//	return true;
}
void inbang()
{
	for(int i=1;i<=1000;i++)
	{
		if(KiemTraSoNguyenTo(i)==1)
		{
			printf("%5d",i);
		}
	}
}

int main()
{
//	int n;
//	printf("nhap so n de kiem tra");
//	scanf("%d",&n);
//	
//	if(kiemtra(n)==1) //neu dung kieu bool thi viet la if(kiemtra()){...}
//	{
//		printf("la so nguyen to");
//	}
//	else{
//		printf("ko phai so nguyen to");
//	}
	

inbang();	
}

