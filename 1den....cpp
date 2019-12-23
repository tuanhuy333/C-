#include<stdio.h>

void lietke(int n)
{
	printf("nhap n (n la so ban muon liet ke tu 1 den n)");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		printf("%5d",i);
	}

}

int main()
{
	int n;
	
	lietke(n);
	
}
