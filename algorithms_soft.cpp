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
void insertion_sort(int a[],int n){
	int value,hole;
	for(int i=0;i<n;++i){
		value=a[i];
		hole=i;
		while(hole > 0 && a[hole -1]>value){
			a[hole]=a[hole -1];
			hole--;
		}
		a[hole]=value;
	}
}
void bubble_sort(int a[],int n){
	bool swapped=false;
	
	for(int i=0;i<n-1;++i){
		swapped=false;
		
		for(int j=0;j<n-1-i;++j){
			if(a[j] > a[ j+1]){
				int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
					swapped=true;
			}
		}
		if(!swapped){
			break;
		}
	}
}
void bubble_1(int a[],int n){
	
	for(int i=0;i<n-1;++i){
		for(int j=n-1;j>i;--j){
			if(a[j] < a[j-1]){
				int temp=a[j];
					a[j-1]=a[j];
					a[j]=temp;
			}
		}
	}
}
void selection_sort(int a[],int n){
	
	for(int i=0;i<n-1;++i){
		int index_min=i;
		for(int j=i+1;j<n;++j){
			if(a[j] < a[ index_min]){
				index_min=j;
			}
		}
		if(index_min != i){
			int temp=a[index_min];
				a[index_min]=a[i];
				a[i]=temp;
		}
	}
}
void merge_sort(int m,int n,int &k,int a[],int b[],int c[]){
	int i=0,j=0;
	k=0;
	while(i<m && j<n){
		
		if(a[i] <= b[j]){
			c[k]=a[i];
			i++;
		}
		else{
			c[k]=b[j];
			j++;
		}
		k++;
	}
	if(i<m)
	{
		for(int p=i;p<m;++p){
			c[k]=a[p];
			k++;
		}
	}
	else{
		for(int p=j;p<n;++p){
			c[k]=b[p];
			k++;
		}
	}
}
void insert(int a[],int n){
	int hole;
	int value;
	
	for(int i=0;i<n;++i){
		
		hole=i;
		value=a[i];
		
		while(hole > 0 && a[hole-1] > value){
			a[hole]=a[hole-1];
			hole--;
		}
		a[hole]=value;
	}
}
void selection(int a[],int n){
	
	int index_min;
	
	for(int i=0;i<n-1;++i){
		index_min=i;
		for(int j=i+1;j<n;++j){
			if(a[j] < a[index_min]){
				index_min=j;
			}
		}
		if(index_min != i){
			int temp=a[index_min];
				a[index_min]=a[i];
				a[i]=temp;
		}
	}
}
void bubble(int a[],int n){
	bool swapped=false;
	for(int i=0;i<n-1;++i){
		swapped=false;
		for(int j=0;j<n-1-i;++j){
			if(a[j] > a[j+1]){
				int temp=a[j+1];
					a[j+1]=a[j];
					a[j]=temp;
					
					swapped=true;
			}
		}
		if(!swapped){
			break;
		}
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
	
	bubble_1(a,n);
	cout<<"\n";
	
	xuat_mang(a,n);

	
	
	
	return 0;
}
