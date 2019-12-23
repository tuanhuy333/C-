#include<stdio.h>
int nhap(int &a,int &b)
{
	printf("nhap hai so a va b");
	scanf("%d%d",&a,&b);
	
}
int tim(int a,int b)
{
	//BCNN= (a*b)/UCLN

	while(a!=b)
	{
		
		if(a>b)
		{
			a=a-b;
			
		}
		else
		{
			b=b-a;
		}
	
	}
	printf("\nucln=%d",a);

	
	
}

int main()
{
	int a,b;
	nhap(a,b);
	tim(a,b);
	
}
