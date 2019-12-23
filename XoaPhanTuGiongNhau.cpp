#include<stdio.h>
#include<stdlib.h>
//nhap mang
void NhapMang(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		a[i]=rand()%4;
	}
}
void XuatMang(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		printf("%5d",a[i]);
	}
	
}
//xoa phan tu
void Xoa(int &n,int a[],int k)
{
	for(int i=k+1;i<n;++i)
	{
		a[i]=a[i+1];
	}
	n--;
}

//xoa phan tu giong nhau
void XoaPhanTuGiongNhau(int &n,int a[])
{
	for(int i=0;i<n-1;i++)

    {
		for( int j=i+1;j<n;j++)

        {
			if (a[i]==a[j])

        	{

            	for(int k=j;k<n-1;k++)

            		{a[k]=a[k+1];}

				n--;
            
            	j--;
        	}

        }
    }
	
	//for(int i=0;i<n-1;++i)
//	{
	//	//5 2 5 1
	//	for(int j=i+1;j<n;++j)
	//	{
	//		if(a[i]==a[j])
	//		{
	//		 Xoa(n,a,j);
	//			i--;
	//			}
				
				
			
			
	//	}
	//}
}
int  main()
{
	int n,a[50];
	printf("nhap so phan tu n");
	scanf("%d",&n);
	
	
	NhapMang(n,a);
	XuatMang(n,a);
	XoaPhanTuGiongNhau(n,a);
	printf("\n");
	XuatMang(n,a);
	
	
	
	
}
