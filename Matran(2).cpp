#include<iostream>
#include<math.h>
#define max 20

using namespace std;
int tong_matran(int a[max][max],int m,int n)
{
	int tong=0;
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			tong+=a[i][j];
		}
	}
	return tong;
}
void nhap_matran(int a[max][max],int &m,int &n)
{
	cout<<"nhap mxn : ";cin>>m>>n;
	cout<<endl;
	
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			cout<<"a["<<i<<"]["<<j<<"] ";
			cin>>a[i][j];
		}
	}
	
}

void xuat_matran(int a[max][max],int m,int n)
{
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			cout.width(4);
			cout<<a[i][j];
			
		}
		cout<<endl;
	}
}

int songuyento(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<=sqrt(n);++i)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
void vitri_snt_matran(int a[max][max],int m,int n)
{
	int vitrii[40],k=0;
	int vitrij[40],f=0;
	
	int temp_snt[40],g=0;
	int dem=0;
	
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(songuyento(a[i][j])==1)
			{
				dem++;
				temp_snt[g++]=a[i][j];
				vitrii[k++]=i;
				vitrij[f++]=j;
			}
		}
	}
	cout<<"co "<<dem<<" so nguyen to trong ma tran ";
	for(int i=0;i<dem;++i)
	{
		cout<<temp_snt[i];
		cout.width(4);
	}
	for(int i=0;i<dem;++i) //trinh bay de nhin thay vi i =0
	{
		cout<<endl;
		cout<<" dong thu "<<vitrii[i];
		
		cout<<" cot thu "<<vitrij[i];
	}
}

//sap xep tang dan theo tong dong

void hoanvi(int &a,int &b)
{
	int temp=a;
		a=b;
		b=temp;
}

int tongdong_matran(int a[max][max],int n,int k)
{
	int tong=0;
	for(int j=0;j<n;++j)
	{
		tong+=a[k][j];
	}
	return tong;
}
void sapxep_theo_tongdong(int a[max][max],int m,int n)
{
	for(int i=0;i<m-1;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			if(tongdong_matran(a,n,i) > tongdong_matran(a,n,j))
			{
				for(int k=0;k<n;++k)
				{
					hoanvi(a[i][k],a[j][k]);
				}
			}
		}
	}
}
void sapxep_theodong(int a[max][max],int m,int n) // cac dong tang dan tu trai qua phai
{
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n-1;++j)
		{
			for(int k=j+1;k<n;++k)
			{
				if(a[i][j] > a[i][k])
					hoanvi(a[i][j],a[i][k]);
			}
		}
	}
}
//hoan doi noi dung hai dong cua ma tran
void hoan_doi_2_dong(int a[max][max],int n,int k,int l)
{
	//dong k,dong l
	for(int j=0;j<n;++j)
	{
		hoanvi(a[k][j],a[l][j]);//ham hoan vi
	}
}
int main()
{
	int a[max][max],m,n;
	
	nhap_matran(a,m,n);
	
	
	//vitri_snt_matran(a,m,n);
	//sapxep_theodong(a,m,n);
	hoan_doi_2_dong(a,n,1,0);
	xuat_matran(a,m,n);
	
	
	system("pause");
	return 0;
}
