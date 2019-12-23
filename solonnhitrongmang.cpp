#include<stdio.h>
void nhapmang(int n,int array[])
{
	for(int i=0;i<n;++i)
	{
		printf("a[%d]=",i);
		scanf("%d",&array[i]);
	}
}
void sapxep(int n,int array[])
{
	int tam,i,j;
	for(int i=0;i<n-1;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			
		

			if(array[i]>array[j])
			{
			
			tam=array[i];
			array[i]=array[j];
			array[j]=tam;
			
			
			}
			
		}
}
//sau khi sap xep thu tu
printf("\nsap xep tang dan :");
for(int i=0;i<n;++i)
{
		printf("%2d",array[i]);
		
	
}

printf("\n sap xep giam dan :");
for(int i=n-1;i>=0;--i)
{
		printf("%2d",array[i]);
}
	
}
void solonnhi(int n,int array[])
{
	//dao nguoc mang truoc
	for(int i=n-1;i>=0;--i)
	{
		printf("\nso lon nhat la %d",array[i]);
		if(array[i]>array[i-1])
		{
			printf("\nso lon nhi la %d",array[i-1]);
			break;
			//co break de dung vong lap
		}
	}
}
int main()
{
	int n,array[30];
	printf("nhap n");scanf("%d",&n);
	
	nhapmang(n,array);
	sapxep(n,array);
	solonnhi(n,array);
	
	
	//phai sap xep thu tu tang dan cua mang truoc r tim so lon nhi
}
