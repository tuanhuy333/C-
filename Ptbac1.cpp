#include<stdio.h>
int main(){
	//phuong trinh bac 1 ax+b=0
	float a,b;
	printf("hay nhap a va b ");
	scanf("%f%f",&a,&b);
	if(a==0)
	{
		if(b==0)
		{
			printf("phuong trinh vo so nghiem");
		}
		else
		{
			printf("phuong trinh vo nghiem");
		}
	}
	else
	{
		printf("nghiem cua phuong trinh la %.2f",-b/a);
		
	}
}
