#include<iostream>
#define max 20

using namespace std;
void nhap_mang(int a[max][max],int &m,int &n)
{
	
	cout<<"nhap mxn :"<<endl;cin>>m>>n;
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			cout<<"a["<<i<<"]["<<j<<"] ";
			cin>>a[i][j];
		}
	}
}
void xuat_mang(int a[max][max],int m,int n)
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
int max_dong(int a[max][max],int m,int n,int row)
{
	int max1=a[row][0];
	
	
	for(int j=0;j<n;++j)
	{
		if(a[row][j] > max1)
		{
			max1=a[row][j];
		}
	}
	return max1;
}
int min_dong(int a[max][max],int m,int n,int row)
{
	int min=a[row][0];
	for(int j=0;j<n;++j)
	{
		if(a[row][j] < min)
		{
			min=a[row][j];
		}
	}
	return min;
}

void mang_b(int a[max][max],int m,int n)
{
	int b[10][10];
	
	for(int i=0;i<m;++i)
	{
		int ki=(min_dong(a,m,n,i) + max_dong(a,m,n,i))/2;
		for(int j=0;j<n;++j)
		{
			b[i][j]=a[i][j]*ki;
		}
	}
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int a[max][max],n,m;
	int b[max][max];
	
	nhap_mang(a,m,n);

	mang_b(a,m,n);
	
	
	
	
	system("pause");
}
