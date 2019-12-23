#include<stdio.h>
#include<stdlib.h>

void nhapmang(int &n,int array[])
{
	
	printf("nhap so phan tu n ");
	scanf("%d",&n);

	for(int i=0;i<n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&array[i]);
	}
}

void xuatmang(int n,int array[])
{
	
	for(int i=0;i<n;++i)
	{
		printf("a[%d]=%d",i,array[i]);
	}
}

int timx(int x,int &n,int array[])
{
	printf("nhap x muon tim");
	scanf("%d",&x);
	
	int vt=-1; //vi tri
	for(int i=0;i<n;++i)
	{
		if(x==array[i])
		{
			vt=i;break;
		}
	}
	return vt;
	
}
int kiemtrasonguyento(int n)
{
	if(n<2)
	{
		return 0;
	}
	for(int i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			return 0;
		}
		
	}
	return 1;
}

float TBsonguyento(int n,int array[])
{
	float dem=0;
	int s=0;
	float kq=0;
	for(int i=0;i<n;++i)
	{
		
		if(kiemtrasonguyento(array[i])==1)
		{
			dem++;
			s+=array[i];
			kq=s/dem;
		}
	}
	
	return kq;
	
	
}

int main()
{	
	int n,array[30],x,c;
	
	while(1)
	{
		
		//menu
		printf("1:nhap mang\n");
		printf("2:xuat mang\n");
		printf("3:tim x trong mang\n");
		printf("4:tinh trung binh cong cac so nguyen to\n");
		printf("8:thoat\n");
		
		
		//chon
		printf("chon chuc nang ban muon thuc hien");
		scanf("%d",&c);
		
		
		
		switch(c)
		{
			
			case 1: nhapmang(n,array);break;
			case 2: xuatmang(n,array);break;
			case 4: 
 printf("TB so nguyen to =%.2f\n",TBsonguyento(n,array)); break;
		
			case 8 :exit(1);
			case 3: int vitri=timx(x,n,array);
					if(vitri==-1)
					{
						printf("khong co phan tu %d",x);
					}
					else{
						printf("vt=%d\n",vitri);
					};
					break;
					
			
			
					
		
		}
	}
	
	
	
}

