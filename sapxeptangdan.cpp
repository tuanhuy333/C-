#include<stdio.h>

void nhapmang(int &n,int a[])
{
	printf("nhap so phan tu cua mang");
	scanf("%d",&n);
	
	for(int i=0;i<n;++i)
	{
	
	   printf("\na[%d]=",i);
	   scanf("%d",&a[i]);
	
	}
}
void xuatmang(int n,int a[])
{
	
	for(int i=0;i<n;++i)
	{
		printf("\na[%d]=%d\n",i,a[i]);
	}
}

int sapxep(int n,int a[])
{
	//sap xep
	//dao mang
	
	int k;
	for(int i=0;i<n-1;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
			    k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
		
	}
	printf("\ncac phan tu tang dan la :\n");
	for(int i=0;i<n;++i)
	{
		printf("\n%d",a[i]);
	}
	
}

void daomang(int n,int a[])
{
	//sap xep sau do dao lai bang vong lap
	for(int i=n-1;i>=0;--i)
	{
		
		printf("\n%d",a[i]);
	}
//   for(int i=0;i<n/2;i++)
//    {
//      int tam=a[i];
//         a[i]=a[n-1-i];
//         a[n-1-i]=tam; 
//        
//    }

	
}


int main()
{
	int a[50],n;
	nhapmang(n,a);
	sapxep(n,a);
	daomang(n,a);
//	xuatmang(n,a);
	
	
}
