#include<stdio.h>

int main()
{
	int n;
	printf("nhap so n");
	scanf("%d",&n);
	
	//search
	int i;
	int max=1;
	for(i=1;i<=n;++i)
	{
		if(n%i==0)   //la uoc
		{
			if(i%2==1) //so le
			{
			
				if(i>max)
				{
					max=i;
				}
			}
		}
	}
	printf("uoc le lon nhat la %d",max);
}
