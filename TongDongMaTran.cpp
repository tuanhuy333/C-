#include<iostream>
#define max 50

using namespace std;

void nhapmatran(int a[max][max],int &m,int &n)
{
	cout<<"nhap dong x cot ";cin>>m>>n;
	
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			cout<<"a["<<i<<"]["<<j<<"] =";
			cin>>a[i][j];
		}
	}
}
int Tong1dong(int a[max][max],int m,int n,int row)
{
	
	int tong=0;
	
		for(int j=0;j<n;++j)
		{
			tong+=a[row][j];
		}
	return tong;
}
int Tong1cot(int a[max][max],int m,int n,int col)
{
	int tong=0;
	for(int i=0;i<m;++i)
	{
		tong+=a[i][col];
	}
	return tong;
}
int main()
{
	int a[max][max],m,n;
	
	nhapmatran(a,m,n);
	cout<<Tong1cot(a,m,n,1);
	
	system("pause");
	return 0;
}
