#include <stdio.h>
int main()
{
	int i,n,tong=0;
	printf("hay nhap n");
	scanf("%d",&n);

	do{tong+=i;i++;}
	while(i<=n);
	printf("result=%d",tong);


}
