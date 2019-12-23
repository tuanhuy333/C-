#include <stdio.h>
int main(){
	//tinh n!
	int n,i,s=1;
	printf("nhap n ");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		s*=i;
		
	}
	printf("%d ! = %d",n,s);
}
