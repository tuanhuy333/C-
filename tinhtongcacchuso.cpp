#include<stdio.h>
#include<conio.h>


//viet ham

int tinh(int n) //trong ngoac la gia tri nhap vao
{
	int s=0;
	while(n>0)
	
	{
		s+=n%10;  //vd 234%10=4 luc nay s=4,sau do 234/10=23 chia tiep lay du cho 10(23%10=3) sau do + tiep
		n=n/10;
	}
	printf("tong cac chu so =%d",s);

}
int main()
{
	//tinh tong cac chu so trong mot so
	long n;
	printf("nhap n");
	scanf("%ld",&n);
	
	//goi ham
	return tinh(n);
	
	
	getch();
	return 0;
	
	
	
}
