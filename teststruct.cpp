#include<iostream>

using namespace std;

struct thongtin
{
	char hoten[32];
	char diachi[48];
	char sdt[11];
};
typedef struct thongtin THONGTIN;

void nhap(THONGTIN info[],int &n)
{
	cout<<"nhap so luong :";cin>>n;
	
	for(int i=0;i<n;++i)
	{
		
		cout<<i+1<<endl;
		
		fflush(stdin);
		cout<<"ho ten : "<<endl;
		gets(info[i].hoten);
		cout<<"dia chi : "<<endl;
		gets(info[i].diachi);
		cout<<"so dien thoai : "<<endl;
		gets(info[i].sdt);
	}
}
void xuat(THONGTIN info[],int n)
{
	for(int i=0;i<n;++i)
	{
		cout<<i+1<<endl;
		
		cout<<info[i].hoten<<endl;
		cout<<info[i].diachi<<endl;
		cout<<info[i].sdt<<endl;
	}
}
//tim ten khi biet sdt
void tim(THONGTIN info[],int n)
{
	char x[20];
	
	cout<<"nhap sdt can tim :";
	gets(x);
	
	for(int i=0;i<n;++i)
	{
		if(info[i].sdt==x)
		{
			cout<<info[i].hoten;
		}
	}
}
int main()
{
	THONGTIN info[100];
	int n;
//	nhap(info,n);
//	xuat(info,n);
//	tim(info,n);
//	
	
	
	system("pause");
	return 0;
}
