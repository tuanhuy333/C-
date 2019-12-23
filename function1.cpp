#include<stdio.h>

//function
int tinh(int a,int b,char pheptinh)
{
	if(pheptinh =='+')
	{
		int tong=a+b;
		return tong;
		
	}
	if(pheptinh =='-')
	{
		int hieu=a-b;
		return hieu;
	}
	if(pheptinh =='*'|| pheptinh =='x')
	{
		int tich =a*b;
		return tich;
	}

	
	return b == 0 ? a : (float)a/b; //neu b==0 right thi tra ve a,con sai thi tra ve (float)a/b

	
}

int main (){
	int a,b;

	printf("nhap a= ");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	
	//goi ham
	float th=tinh(a,b,'/');
	printf("tong = %d\n",tinh(a,b,'+'));
	printf("hieu = %d\n",tinh(a,b,'-'));
	printf("tich = %d\n",tinh (a,b,'*'));
	printf("thuong = %f\n",th);

}
