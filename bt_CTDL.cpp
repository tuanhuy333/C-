#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
struct loaixe{
	int maso;
	int thoigian;
	string ten;
};
struct container{
	
	int maso=4;
	int thoigian=4;
	string ten="container";

};
struct xetai{
	int maso=3;
	int thoigian=3;
	string ten="xetai";
};
struct xekhach{
	int maso=2;
	int thoigian=2;
	string ten="xekhach";
};
struct xecon{
	int maso=1;
	int thoigian=1;
	string ten="xecon";
};

void tao_mang(int a[],int &n){
	cout<<"nhap so luong xe trong hang cho:";
	cin>>n;
	
	for(int i=0;i<n;++i){
		a[i]=(1+(rand()%4));
		cout<<a[i]<<" ";
	}
}

void xu_li(int a[],int n,container c,xetai t,xekhach kh,xecon cn){
	
	
	for(int i=0;i<n;++i){
		if(a[i] ==c.maso){
			cout<<"\n"<<i+1<<"."<<c.ten<<" dang trong tram ,"<<"thoi gian qua tram :"<<c.thoigian;
		}
		else if(a[i] == t.maso ){
			cout<<"\n"<<i+1<<"."<<t.ten<<" dang trong tram ,"<<"thoi gian qua tram :"<<t.thoigian;
		}
		else if(a[i] == kh.maso ){
			cout<<"\n"<<i+1<<"."<<kh.ten<<" dang trong tram ,"<<"thoi gian qua tram :"<<kh.thoigian;
		}
		else if(a[i] == cn.maso ){
			cout<<"\n"<<i+1<<"."<<cn.ten<<" dang trong tram ,"<<"thoi gian qua tram :"<<cn.thoigian;
		}
	}
}
int main(){
	
	container c;
	xetai t;
	xekhach kh;
	xecon cn;
	
	
	int a[100],n;
	
	tao_mang(a,n);
	xu_li(a,n,c,t,kh,cn);
	
	
	cout<<"\n";
	system("pause");
	return 0;
}
