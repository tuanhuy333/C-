//#include<iostream>
//
////liet ke day con tang dan
//
//using namespace std;
//
//void nhap(int a[],int &n)
//{
//	cout<<"nhap n";cin>>n;
//	cout<<endl;
//	
//	for(int i=0;i<n;++i)
//	{
//		cout<<"a["<<i<<"] ";
//		cin>>a[i];
//	}
//}
//
//int kiem_tra_tang_dan(int a[],int n)
//{
//	for(int i=0;i<n-1;++i)
//	{
//		if(a[i]> a[i+1])
//		{
//			return 0;
//		}
//			
//	}
//	return 1;
//}
//void xuat(int a[],int n)
//{
//	for(int i=0;i<n;++i)
//	{
//		cout<<a[i]<<" ";
//	}
//}
//int tong_mang(int b[],int nb)
//{
//	int tong=0;
//	for(int i=0;i<nb;++i)
//	{
//		tong+=b[i];
//	}
//	return tong;
//}
//void liet_ke(int a[],int n)
//{
//	int chieudai,nb=0;
//	int b[200];
//	int tong;
//	
//	for(int i=0;i<n;++i)
//	{
//		for(chieudai=1;chieudai<=n;++chieudai)
//		{
//			
//			for(int j=i;j<chieudai;++j)
//			{
//				b[nb]=a[j];
//				nb++;
//			}
//			if(kiem_tra_tang_dan(b,nb)==1)
//			{
//				
//				tong=tong_mang(b,nb);
//				cout<<tong<<" ";
//			}
//		}
//		
//	}
//
//}
//int main()
//{
//	int a[200],n;
//
//	nhap(a,n);
//	liet_ke(a,n);
//
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<conio.h>
using namespace std;
void nhapmang(int a[], int &n)
{ printf("nhap so phan tu :" );
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  { printf(" phan tu thu %d :",i);
    scanf("%d",&a[i]);
  }
}
int xuatmang(int a[],int n)
 {
  printf("mang da nhap \n");
  for(int i=0;i<n;i++)
    {
      printf(" %4d ",a[i]);
    }
 }
void daycontang(int a[],int n)
{
 printf("\n cac day con tang la: \n");
 int i,dem;
 for( i=0;i<n;i++)
 {
 dem=0;
 while(a[i]<a[i+1])
 {
 if(a[i]<a[i+1]) printf("%d %d ",a[i],a[i+1]);
 else printf("%d",a[i+1]);
 dem++; i++; 
 }
 printf("\n");
 }
}
int main()
{
 int a[50],n;
 nhapmang(a,n);
 xuatmang(a,n);
 daycontang(a,n);
 return 0;
}

