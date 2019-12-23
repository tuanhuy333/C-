#include<iostream>
#include<math.h>



using namespace std;
int sochan(int n)
{
	return ((n%2==0) ? 1:0);
}
int sole(int n)
{
	return ((n%2!=0) ? 1:0);
}
int songuyento(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<=sqrt(n);++i)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int sohoanchinh(int n)
{
	int tong=0;
	for(int i=1;i<n;++i)
	{
		if( n%i == 0)
			tong += i;
	}
	return ((tong==n) ?  1:0); //neu tong ==n dung thi tra ve 1 ,sai thi tra ve 0
}
int sochinhphuong(int n)
{
	float can_n= sqrt(n);
	
	if(can_n == (int)can_n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	//kiem tra
	
	for(int i=1;i<=1000;++i)
	{
		if(sole(i) ==1 )
		{
			cout<<i<<" ";
		}
	}
	
	
	system("pause");
	return 0;
}
