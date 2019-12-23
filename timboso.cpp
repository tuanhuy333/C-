#include<stdio.h>

int main ()
{   
//timboso
	int i,j,x,y,z;
	for(i=1;i<=10000;++i)
	{
		for(j=1;j<=10000;++j)
		{
			for(z=1;z<=10000;++z)
			{
				if(i*i+j*j==(z*z))
				{
					printf("%d %d %d\n",i,j,z);
				}
			}
			
			
		}
		
	}
	
}
