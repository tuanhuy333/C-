#include<stdio.h>
#include<math.h>
#include<conio.h>

int nhap(int &a,int &b,int &c)
{
	
	printf("nhap ba canh cua tam giac (a,b,c): ");
	scanf("%d%d%d",&a,&b,&c);
}

int kiemtra(int a,int b,int c)
{
	if(a<b+c&&b<a+c&&c<a+b&&a*b*c>0)
	{
		if(a==b&&a==c)
		{
			printf("tam giac deu");
	
		
	 	}
	 	else if(a==b||a==c||b==c)
	 	{
	 		if((float) a==sqrt(b*b+c*c)||(float) b==sqrt(a*a+c*c)||(float) c==sqrt(a*a+b*b))
	 		{
	 			printf("tam giac vuong can");
	 		}
	 		else{
	 			printf("tam giac can");
	 		}
	 	}
	 	else if((float) a==sqrt(b*b+c*c)||(float)b==sqrt(a*a+c*c)||(float) c==sqrt(a*a+b*b))
	 	{
	 		printf("tam giac vuong");
	 	}
	 	else{printf("tam giac thuong");
	 	}
		
	}
	else{printf("khong ton tai tam giac");
	}
}

int main ()
{
	
	//kiem tra loai tam giac :
	// co tao tham mot tam giac hay khong
	// tam giac deu
	// tam giac can
	// tam giac vuong can
	// tam giac vuong
	// tam giac thuong
	
   int a,b,c;
   nhap(a,b,c);
   kiemtra(a,b,c);
   
   
   getch();
   
}
