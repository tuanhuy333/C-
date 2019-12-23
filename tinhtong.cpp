#include <stdio.h>
//tinh tong s= 1+1/3+1/5+...+1/(2n+1)
int main()
{
	float i,s=0;
	int n;
	printf("nhap n :");
	scanf("%d",&n);
	for (i=0;i<=n;++i)
	{
		
		s=s+1/(2*i+1);
		
	}
	printf("tong :%f",s);
	
	
	
}
