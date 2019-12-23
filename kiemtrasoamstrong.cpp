#include<stdio.h>
#include<conio.h>

//ham dem so chu so cua n
int dem(int n)
{
	int demso=0;
	while(n>0)
	{
		n/=10;
		demso++;
	}
	return demso;
}

//ham luy thua
int luythua(int x,int k)
{
	int s=1;
	for(int i=1;i<=k;i++)
	{
		s*=x;
	}
	return s;
}

int kiemtra(int n)
{
	int tong=0;
	int m=n; //giu gia tri cua n vao m
	int c;
	int k=dem(n); //ran so mu
	while(m>0)
	{
		c=m%10; //tung chu so cua n
	
		tong+=luythua(c,k);
		m/=10; 
	}
	int kq=(tong==n?1:0);
	return kq;
}

//ham in bang

void inbang()
{
	for(int i=1;i<=10000;i++)
	{
		if(kiemtra(i)==1){
		
		printf("%9d",i);
	}
	}
}
int main()
{
//	int n;
//	printf("nhap n de kiem tra");
//	scanf("%d",&n);
	
	
inbang();

	
}
