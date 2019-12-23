#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int dem_chu_so(int n)
{
	int dem=0;
	while(n!=0)
	{
		
		dem++;
		n/=10;
	}
	return dem;
}
void kiem_tra_so_doi_xung(int n)
{
	int k1=0,k2=0;
	int temp1[20];
	int sochuso=dem_chu_so(n);
	while(n!=0)
	{
		temp1[k1++]=n%10;
		n/=10;
		
	}
	
	int temp2[20];
	
	for(int i=sochuso-1;i>=0;--i)
	{
		temp2[k2++]=temp1[i];
	}
//	int i=0;
//	int j=sochuso-1;
//	while(i<j)
//	{
//		if(temp2[i++] != temp2[j--])
//			return 0;
//	}
//	return 1;
	for(int i=0;i<sochuso;++i){
		cout<<temp1[i];
	}

	
}
int main()
{
	int n;
	cin>>n;
	
	kiem_tra_so_doi_xung(n);
	
	system("pause");
	return 0;
}
