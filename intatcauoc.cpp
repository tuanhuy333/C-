#include<stdio.h>
#include<conio.h>

int in(int n)
{

	do{
		printf("\nnhap vao so n (n>=0):\n");
		scanf("%d",&n);
		if(n<0)
		{
			printf("so ban nhap be hon 0 (ko hop le)");
		}
		else
		{
			break;
		}
	}
	while(n<0);
	
	if(n==0)
	{
		printf("so %d khong co uoc so nao ca!!!",n);
	}
	int dem =0;
	if(n>0)
	{
		for(int i=1;i<=n;++i)
		{
			if(n%i==0)
			{
				dem++;
			}
		}
	}
	printf("so %d co %d uoc so ",n,dem);
}

int main()
{
	int n;
	quaylai:in(n);
	printf("\nban co muon thuc hien lai chuong trinh y/n");
	int tieptuc=getch();
	if(tieptuc=='y'||tieptuc=='Y')
	{
		goto quaylai;
	}
	else {return 0;
	}
	
	
	
}
