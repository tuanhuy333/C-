#include <stdio.h>
#include <math.h>


int main(){
	//dang phuong trinh ax^2+bx+c=0
	
	
	float a,b,c,x,delta,x1,x2;
	printf("Hay nhap a,b,c");
	scanf("%f %f %f",&a ,&b,&c);

	if(a==0)
	{
		if(b==0)
		{
			if(c==0) //a=0 b=0 c=0
			{
				printf("Phuong trinh vo so nghiem");
			}
			else //a=0 b=0 c khac 0
			{
				printf("Phuong trinh vo nghiem");
			}
		}
		else //a=0 b khac 0
		{
			printf("Nghiem cua phuong trinh la %.2f",x=-c/b);

		}
	}
	else //a khac 0
	{
		delta=b*b-4*a*c;
		if(delta==0)
		{
			printf("Phuong trinh co nghiem kep %f",x=-b/2*a);
		}
		if(delta>0)
		{
			printf("Phuong trinh co 2 nghiem phan biet %.2f va %.2f",x1=(-b-sqrt(delta)/2*a),x2=(-b+sqrt(delta)/2*a));
		}
		if(delta<0)
		{
			printf("Phuong trinh vo nghiem");
		}

	}

 printf("\nChuong trinh ket thuc");


}
