#include <stdio.h>
int main(){
	//tinh x^n
	int i,x,n,s=1;
	printf("nhap x,n");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;++i)
	{
		s*=x;
	}
	printf("result %d",s);
}
