#include<iostream>

using namespace std;

int UCLN(int a,int b)
{
	
	
	while(a!=b)
	{
		if(a>b)
		{
			a-=b;
		}
		if(b>a)
		{
			b-=a;
		}
	}
	return a;
	
}
void toi_gian(int a,int b)
{
	cout<<"phan so sau khi toi gian "<<a/UCLN(a,b)<<" / "<<b/UCLN(a,b);
	
}
int main()
{
	int a,b;
	
	cout<<"nhap tu so a va mau so b ";cin>>a>>b;
	toi_gian(a,b);
	
	return 0;
	
}
