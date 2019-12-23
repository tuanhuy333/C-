#include<stdio.h>

int kiemtrasodoixung(int n)
{
	int m=n;
	int tong=0;
	while(m!=0)
	{
		tong=tong*10+m%10;
		m/=10;
	}

	return (tong==n?1:0);

}
void inBangsodoixung()
{
	for(int i=1;i<=10000;++i)
	{
		if(kiemtrasodoixung(i)==1)
		{
			printf("%5d",i);
		}
	}
}

int main()
{
	int n;
	
	
	printf("%d",kiemtrasodoixung(1214));
	
	
	//gan tung chu so cua k vao mot mang
	
	

	
	
}
