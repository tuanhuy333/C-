#include<stdio.h>
#include<stdlib.h>

//kiem tra x trong [a,b]
//a<= x <=b

void nhapx(int a,int b,int &x)
{
	
	do{
		printf("nhap x");
		scanf("%d",&x);
	}
	while (x<a||x>b);
	
	
}
// kiem tra phan tu cua mang co nam trong khoang dieu kien hay khong



void nhapmang(int &n,int a[])
{
	
	printf("nhap so phan tu cua mang (n)");
	scanf("%d",&n);
	
	for(int i=0;i<n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void xuatmang(int n,int a[])
{
	
	
	for(int i=0;i<n;++i)
	{
		
		printf("\na[%d]=%d",i,a[i]);
	}
}


void nhapmangtrongdoanab(int a,int b,int &n,int c[])
{
	
	
	printf("nhap so phan tu cua mang (n)");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		printf("c[%d]=",i);
		nhapx(a,b,c[i]);
	}
	
}


/*
ham tim max trong mang

int  maxmang(int n,int a[])
{
	int max;
	max=a[0];
	
	for(int i=0;i<n;++i)
	{
		if(a[i]>max )
		{
			max=a[i];
		
	}
	return max;
	
	
}



vong lap la : neu thoa man thi lam tiep


}



*/


//tim so lon nhi trong mang



int main()
{
	int a[30],n,c[30];
	
	//test
	
	
	
	
	//
	
	
	
	int chon;
	
	while(1)
	{
		
		printf("\n1 : nhap");
		printf("\n2 : xuat");
		
		printf("\n3 : nhap mang trong doan [a,b]");
		printf("\n8 : thoat");
		printf("\nchon chuc nang muon thuc hien ");
		scanf("%d",&chon);
		
		switch(chon)
		{
			
			
			case 1: nhapmang(n,a);break;
			
			
			case 2: xuatmang(n,a);break;
			case 3: nhapmangtrongdoanab(1,10,n,c);break;
			
			
			case 8 :exit(1);
			
			
			
			
		}
	}
	
	
//	int x;
//	nhapx(1,10,x);
//	printf("\nx=%d thoa man dieu kien",x);



	
}
