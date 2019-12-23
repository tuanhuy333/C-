#include<stdio.h>
int main ()
{
	//a ^n
	int a,n,i,s=1;
	printf("nhap a ,n");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;++i)
	{
		s*=a;
	}
	printf("%d^%d=%d",a,n,s);
	
	
}
