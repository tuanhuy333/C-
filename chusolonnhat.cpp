#include<stdio.h>

int maxchuso (int n)
{
	
	int max=0;
	while(n!=0)
	{
		int chuso=n%10; //tung chu so trong so N
	
		if(chuso>max)
		{
			max=chuso;
		}
		n/=10;
    }
    return max;
}
int main ()
{
	int n;
	printf("nhap n");
	scanf("%d",&n);
	
	printf("chu so lon nhat trong %d la %d",n,maxchuso(n));
	
	
}
