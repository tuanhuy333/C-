#include<iostream>



using namespace std;

void NhapMang(int *a,int &n)
{
	cout<<"nhap n ";cin>>n;
	cout<<endl;
	
	for(int i=0;i<n;++i)
	{
		cout<<"a["<<i<<"] ";
		cin>>*(a+i);
	}
}
void XuatMang(int *a,int n)
{
	for(int i=0;i<n;++i)
	{
		cout.width(4);
		cout<<*(a+i);
	}
}
int main()
{
	int *a;
	int n;
	a=new int [n];
	
	NhapMang(a,n);
	XuatMang(a,n);
	
	delete a;
	

	return 0;
}

