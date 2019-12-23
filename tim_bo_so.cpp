#include<iostream>
#include<math.h>
using namespace std;

int main()
{


	int n=7;
	int a[6]={121,10,8,7,12,6};
	
	int dem=0;

	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			for(int k=0;k<n;++k)
			{
				if(pow(a[i],2) + pow(a[j],2) == pow(a[k],2))
				{
					dem++;
				}
			}
			
		}
	}
	
	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout <<"dem = "<<dem;
	
	system("pause");
	return 0;
}
