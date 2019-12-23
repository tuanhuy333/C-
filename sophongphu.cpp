#include<stdio.h>

int sophongphu(int n)
{
	int s=0;
	for(int i=1;i<n;++i)
	{
		if(n%i==0)
		{
			s+=i;
		}
	}
	if(s>n)
	{
		printf("%5d",n);
	
	}
	
}
int lietkesophongphu(int l,int r)
{
	//liet ke so phong phu trong doan [l,r]
	
	printf("cac so phong phu trong doan [l,r] la:");
	for(int i=l;i<r;++i)
	{
	    sophongphu(i);
	     
	}
}
int main()
{
	lietkesophongphu(1,50);
	
	
}
