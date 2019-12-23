#include<stdio.h>

int demso(int a )
{
	int dem=0;
	while(a!=0)
	{
		dem++;
		a/=10;
	}
	printf("%d",dem);
}

int main()
{
	
	//chuyen doi so thap phan sang so nhi phan
	int n,so,box=0,tanglen=1,sobandau;
	
	printf("nhap vao so thap phan n: ");
	scanf("%d",&n);
	sobandau=n; 
	//n =6
	while(n!=0)
	{
		so=n%2;   			printf("\nso=%d",so);	//(1)
		box += so*tanglen;  printf("\nbox=%d",box);	//(2)
		n/=2;               printf("\nn=%d",n);  	//(3)
		
		//   (1),(2),(3) la cach thuc hoat dong cua vong lap qua tung gia tri n
		tanglen*=10; //de cho cac ket qua chia duoc ko + vs nhau ,thay vao do la hien thi tung so
	}
	printf("\nso thap phan :%d",sobandau);
	printf("\nso nhi phan :%d",box);
}
