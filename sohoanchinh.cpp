#include<stdio.h>


//ham kiem tra so hoan chinh

int kiemtra(int n)
{
	int i,s=0;

	for(i=1;i<n;++i)
	{
		if(n%i==0){
			s+=i;
		}
	}

	int kq=(s==n?1:0);
	return kq;
}

//ham in ra cac so hoan chinh
void inbang()
{
	for(int i=1;i<=1000;i++)
	{
		if(kiemtra(i)==1)
		{
			printf("%5d",i);
		}
	}
}
int main(){
//	int n;
//	printf("nhap n de kiem tra\n");
//	scanf("%d",&n);
//	kiemtra(n);
//	
inbang();

}
