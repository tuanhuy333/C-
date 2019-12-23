#include<stdio.h>
void nhap(int n,int array[])
{
	
	for(int i=0;i<n;++i)
	{
		printf("a[%d]",i);
		scanf("%d",&array[i]);
	}
}

int xoaphantutaik(int n,int array[])
{
	
	//duoc dung de xoa songuyento,sohoanchinh,sochinhphuong,...
	
	int k;
	printf("nhap vi tri k");
	scanf("%d",&k);
	if(k<n)
	{
	
	for(int i=k;i<=n;++i)
	{
		array[i]=array[i+1];
		
	}
	n--;
	printf("\ncac phan tu sau khi xoa ");
	for(int i=0;i<n;++i)
	{
		printf("\na[%d]=%d",i,array[i]);
	}
}
	else{
		printf("\nphan tu muon xoa vuot so phan tu cua mang");
	}
}

int main()
{
	int n,array[30];
	printf("nhap so phan tu n");
	scanf("%d",&n);
	//xoa phan tu trong mang
	
	
	//test
	nhap(n,array);
	xoaphantutaik(n,array);
	
	
}
