#include<stdio.h>
#include<conio.h>


int in(int n)
{
	int dem=0,i;
	for(i=0;i<=10000;i+=2)
	{
		dem++;
		
	    if(dem<=n)
		{
			printf("%6d",i);
	    }
	    
	
	}


}
int main()
{
	
	int n;
	printf("nhap n ( n la so so chan dau tien ban muon hien thi )");
	scanf("%d",&n);
	
	in(n);
	
}
