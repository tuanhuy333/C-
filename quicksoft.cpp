#include<iostream>
#include<stdlib.h>
using namespace std;

void nhap_mang(int a[],int &n){
	cout<<"nhap so phan tu n:";
	cin>>n;
	
	
	for(int i=0;i<n;++i){
		a[i]=rand()%20;
		
	}
	
}
void xuat_mang(int a[],int n){
	for(int i=0;i<n;++i){
		
		cout<<a[i]<<" ";
	}
}
void swap(int &a,int &b){
	int temp=a;
		a=b;
		b=temp;
}
void quickSort(int Data[], int l , int r)
{
	// If the first index less or equal than the last index
	if (l <= r)
	{
		// Create a Key/Pivot Element
		int key = Data[(l+r)/2];
 
		// Create temp Variables to loop through array
		int i = l;
		int j = r;
 
		while (i <= j)
		{
			while (Data[i] < key)
				i++;
			while (Data[j] > key)
				j--;
 
			if (i <= j)
			{
				swap(Data[i], Data[j]);
				i++;
				j--;
			}
		}
 
		// Recursion to the smaller partition in the array after sorted above
		
		if (l < j)
			quickSort(Data, l, j);
		if (r > i)
			quickSort(Data, i, r);
	}
}
int main(){
	
	int a[100],n;
	
	nhap_mang(a,n);
	xuat_mang(a,n);
	
	quickSort(a,0,10);
	cout<<"\n";
	
	xuat_mang(a,n);

	
	
	
	return 0;
}
