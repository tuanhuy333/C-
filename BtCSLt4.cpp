#include<stdio.h>

void NhapMang(int n,int a[])
{
	for(int i=0;i<n;++i)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
}


//cau a)
int TongTatCaChuSo(int n,int a[])
{
	int s=0;
	int ChuSo;
	for(int i=0;i<n;++i)
	{
		while(a[i]!=0)
		{
			ChuSo=a[i]%10;
			a[i]/=10;
			s+=ChuSo;
			
			
		}
	}
	return s;
}

//cau b)

int KiemTraSoNguyenTo(int n)
{
	int dem=0;
	if(n<2)
	{
		return 0;
	}
	
	for(int i=1;i<=n;++i)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
	{
		return 1;
	}
}
int  SoNguyenToLonNhat(int n,int a[])
{
	int max=0;
	for(int i=0;i<n;++i)
	{
		if(KiemTraSoNguyenTo(a[i])==1 && a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}

//cau c)

int  DemSoNguyenTo(int n,int a[])
{
	int dem=0;
	for(int i=0;i<n;++i)
	{
		if(KiemTraSoNguyenTo(a[i])==1)
		{
			dem++;
		}
	}
	return dem;
}
//cau d)
int TongCacUocSoThucSu(int n,int a[])
{
	int s=0;
	for(int i=0;i<n;++i)
	{
		for(int j=1;j<a[i];++j)
		{
			if(a[i]%j==0)
			{
				s+=j;
				
			}
		}
	}
	return s;
}
//cau e)
float TrungBinhCacSoNguyenTo(int n,int a[])
{
	float dem=DemSoNguyenTo(n,a);
	int s=0;
	float tb;
	for(int i=0;i<n;++i)
	{
		if(KiemTraSoNguyenTo(a[i])==1)
		{
			s+=a[i];
		}
	}
	tb=s/dem;
	return tb;
}
//cau f)

int  SoNguyenToNhoNhat(int n,int a[])
{
	int min=0;
	for(int i=0;i<n;++i)
	{
		if(KiemTraSoNguyenTo(a[i])==1)
		{
			min=a[i];break;
		}
		
	}

	for(int i=0;i<n;++i)
	{
		if(KiemTraSoNguyenTo(a[i])==1 && a[i]<min)
		{
			min=a[i];
		}
	}
	return min;

}
//cau g)
int DemUocSo(int n,int a[])
{
	int dem=0;
	for(int i=0;i<n;++i)
	{
		for(int j=1;j<=a[i];++j)
		{
			if(a[i]%j==0)
			{
				dem++;
			}
		}
	}
	return dem;
	
}
//cau h
void BienDoi(int n,int a[])
{
	for (int i=0;i<n;i++)
	{
		if (KTSNT(a[i])==1) printf("%5d",a[i]);
		else 
		{
			for (int j=a[i]+1;;j++)
			{
				if(KTSNT(j)==1)
				{
				 printf("%5d",j);break;
				}	 
			}
		}
	}
	
}

int main()
{
	int n,a[50];
	
	printf("nhap so phan tu n");
	scanf("%d",&n);
	
	NhapMang(n,a);
	

	SoNguyenToNhoNhat(n,a);
}
