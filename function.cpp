#include<stdio.h>


//function

int tong(int a,int b) //ham tinh tong

{
	int tong=a+b;
	return tong;
}



int hieu(int a,int b)
{
	int hieu=a-b;
	return hieu;
	
	
}
int tich(int a,int b)
{
	int tich=a*b;
	return tich;
	
}
//ham tinh thuong
float thuong(int a,int b)
{
	if(b==0)
	{
		printf("b phai khac khong\n");
		return a;
	}
	else 
	{
		float thuong=(float)a/b;
		return thuong;
	}

}

int main()
{
	int a,b;
	//viet ham nhap hai so a,b sau do tinh tong hieu tich thuong
	printf("nhap a,b= ");
	scanf("%d%d",&a,&b);
	
	//goi ham
	// gan ten khong duoc giong vs ten ham
	
//	int t=tong(a,b);
	int h=hieu(a,b);
	int tc=tich(a,b);
	float th=thuong(a,b);

	
	printf("tong %d\n",tong(a,b));// cach nay van duoc
	printf("hieu %d\n",h);
	printf("tich %d\n",tc);
	printf("thuong %f\n",th); // phai la %f

	
}


