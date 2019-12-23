#include<stdio.h>
int main()
{
	/*hien thi tat ca cac so co 3 chu so
	sao cho tong cac chu so cua no bang tich cua chung*/
	
	int i,a,b,c;
	for(i=100;i<=999;++i)
	{
		//goi so do la abc
		a=i/100;
		b=(i%100)/10;
		c=i%10;
		if(a+b+c==a*b*c)
		{
			printf("%d\n",i);
		}
	}
	
}
