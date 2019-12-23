#include<iostream>
#include<time.h>
#include<stdlib.h>
#define max 20

using namespace std;

void tao_matran(int a[max][max],int &m,int &n)
{
	cout<<"nhap mxn ";cin>>m>>n;
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			a[i][j]=rand() % 10;
		}
	}
}
void xuat_matran(int a[max][max],int m,int n)
{
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			cout<<a[i][j]<<" ";
			
		}
		cout<<endl;
	}
}
void sapxep_theodong(int a[max][max],int m,int n)
{
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n-1;++j)
		{
			for(int k=j+1;k<n;++k)
			{
				if(a[i][j] > a[i][k])
				{
					int temp=a[i][j];
						a[i][j]=a[i][k];
						a[i][k]=temp;
				}
			}
		}
	}
}
int main()
{
	int a[max][max],m,n;
	srand((unsigned)time(NULL));
	
	tao_matran(a,m,n);
	sapxep_theodong(a,m,n);
	xuat_matran(a,m,n);
	
	system("pause");
	return 0;
}
