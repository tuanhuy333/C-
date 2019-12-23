#include<stdio.h>
#include<math.h>

void NhapMang(int &n,int a[]) //&n la goi den dia chi cua n
{
	
	int i;
	printf("nhap so phan tu");
	scanf("%d",&n);
	
	for(i=0;i<n;++i) //vong lap trong mang thuong la < n
	{
		printf("nhap phan tu a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
}
void Xoa(int k,int &n,int a[])
{
	for(int i=k;i<n;++i)
	{
		a[i]=a[i+1];
	}
	n--;
}
void XoaPhanTuGiongNhau(int &n,int a[])
{
	for(int i=0;i<n-1;++i)
	{
		for(int j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				Xoa(j,n,a);
			}
			else j++;
		}
	}
}
void SapXep(int &n,int a[])
{
	for(int i=0;i<n-1;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
			}
		
		}
	}
}
int KiemTraMangTangDan(int n,int a[])
{
	for(int i=0;i<n-1;++i)
	{
		if(a[i]>a[i+1])
		{
			return 0;
		}
	}
	return 1;
}
int KiemTraMangDoiXung(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		if(a[i]!=a[n-1-i])
		{
			return 0;
		}
	}
	return 1;
}

void SapXepChanGiamDan(int n,int a[])
{
	for(int i=0;i<n-1;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			if(a[i]%2==0 && a[j]%2==0 && a[i]<a[j])
			{
				int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
			}
		}
	}
}
int PhanTuGiongNhauTrongMang(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(a[j]==a[i])
			return a[j];
		}
	}
}
int DemPhanTu(int x,int n,int a[])
{
	int dem=0;
	
	for(int i=0;i<n;++i)
	{
		if(a[i]==x) dem++;
	}
	return dem;
}
int  PhanTuNhieuNhatTrongMang(int b[],int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		b[i]=DemPhanTu(a[i],n,a);
	}
	int max=b[0],vt=0;
	for(int i=0;i<n;++i)
	{
		if(b[i]>max)
		{
			max=b[i];
			vt=i;
		}
		
		
	}
	return a[vt] ;
}

void XuatMang(int n,int a[])
{
	int i;
	printf("\ncac phan tu cua mang :");
	for(i=0;i<n;++i)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
}
int SoHangDuongDauTien(int n,int a[])

{
	
	
	for(int i=0;i<n;++i)
	{
		if(a[i]>0)
		{
			return a[i];
		
		}
	}

}
int TimSoChanCuoiCung(int n ,int a[])
{
	int kq=-1;
	for(int i=n-1;i>=0;--i)
	{
		if(a[i]%2==0)
		kq=a[i];break;  //neu dung return a[i] thi khoi dung "break"
	}
	return kq;



}
int KiemTraToanLe(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		if(a[i]%2==0)
		{
			return 0;
		}
		
		
	}
	return 1;


	
}
int TonTaiX(int x,int n,int a[])
{
	
	
	for(int i=0;i<n;++i)
	{
		if(a[i]==x)
		{
			return i;
		}
				
	}
	return 0;

	
	
}
int ViTriChuaPhanTuNhoNhat(int n,int a[])
{
	//giong voi bai tim chi so cua phan tu nho nhat
	
	
	int min=a[0];
	int vt=0;
	for(int i=0;i<n;++i)
	{
		if(a[i]<min)
		{
			//min=a[i];
			vt=i;
		}
	}
	return vt;
}
int ViTriChuaPhanTuLonNhat(int n,int a[])
{
	int max=a[0];
	int vt=0;
	for(int i=0;i<n;++i)
	{
		if(a[i]>max)
		{
			max=a[i];
			vt=i;
		}
	}
	return vt;
}
int ViTriSoLeDauTien(int n,int a[])
{
	//dung cach return (khong can dat linh canh vt=-1)
	for(int i=0;i<n;++i)
	{
		if(a[i]%2!=0)
		{
			return i;
		}
	}
	return -1;
}
int SoLonNhat(int n,int a[])
{
	int max=a[0];
	for(int i=0;i<n;++i)
	{
		if(a[i]>max )
		{
			max=a[i];
		}
	}
	return max;
}

int SoNhoNhat(int n,int a[])
{
	int min=a[0];
	for(int i=0;i<n;++i)
	{
		if(a[i]<min )
		{
			min=a[i];
		}
	}
	return min;
}
int SoLonNhi(int n,int a[])
{
	int max=a[0];
	int solonnhi=a[0];
	for(int i=0;i<n;++i)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int i=0;i<n;++i)
	{
		if(a[i]>solonnhi && a[i]<max)
		{
			solonnhi=a[i];
		}
	}
	return solonnhi;
}

//3ham ke tiep phuc vu chung mot bai
int KiemTraSNT(int n)
{
	if(n<2)
	{
		return 0;
		
	}
	for(int i=2;i<=sqrt(n);++i)
	{
		if(n%i==0)
		{
			return 0;

		}
	
	}
	return 1;


}
int TongChuSo(int n)
{
	int tong=0,chuso;
	while(n!=0)
	{
		chuso=n%10;
		tong+=chuso;
		n/=10;
	}
	return tong;
}
int TongCacChuSoLaSoNguyenTo(int n,int a[])
{
	int tong=0,t;
	for(int i=0;i<n;++i)
	{
		t=TongChuSo(a[i]);
		if(KiemTraSNT(t)==1)
		{
			tong+=a[i];
		}
		
	}
	return tong;

	
	
}
void InPhanTuViTriLe(int n,int a[])
{
	
	for(int i=0;i<n;++i)
	{
		if(i%2!=0)
		{
			printf("%5d",a[i]);
		}
	}
}
int main()
{
	
	//khai bao mang 
	
	int a[20],n;
	
	NhapMang(n,a);
	
   PhanTuGiongNhauTrongMang(n,a);

	
	
	
	
	
	
	
}
