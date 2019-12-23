#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;


void NhapMang(int *a,int  &n)
{	
	cout<<"NHAPMANG"<<endl;
	cout<<"Nhap so luong phan tu cua mang ";
	
	cin>>n;
	
	for(int i=0;i<n;++i)
	{
		cin>>*(a+i);
	}
}
void XuatMang(int *a,int n)
{
	cout<<"XUATMANG"<<endl;
	
	for(int i=0;i<n;++i)
	{
		cout.width(4);
		cout<<*(a+i);
	}
}
void ThemPhanTuX(int *a,int &n,int vt,int x)
{
	cout<<endl;
	cout<<"Nhap phan tu x muon them ";cin>>x;
	cout<<endl;
	cout<<"Nhap vi tri muon them ";cin>>vt;
	
	for(int i=n-1;i>=vt;i--)
	{
		*(a+i+1)=*(a+i);
	}
	*(a+vt)=x;
	n++;
}
void xoa(int *a,int &n,int vt)
{
	cout<<endl;
	cout<<"Nhap vi tri muon xoa";cin>>vt;
	
	for(int i=vt;i<n;++i)
	{
		*(a+i)=*(a+i+1);
	}
	n--;
}
int main()
{
	int *a;//tao  con tro de quan li mang
	int n;
	int vt,x;
	
	a=new int [n]; //cap phat bo nho 
	
	NhapMang(a,n);
	
	ThemPhanTuX(a,n,vt,x);

	
	XuatMang(a,n);
	
	delete []a; //giai phong bo nho
	
	getch();
	return 0;
}
