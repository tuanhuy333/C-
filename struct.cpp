#include <stdio.h>

//struct la kieu du lieu cau truc
//no chua nhieu kieu du lieu khac
//la co so cua lap trinh "huong doi tuong"

/*

      struct <ten>
      {
       		<kieu du lieu 1>  <thanh phan 1>;
       		<kieu du lieu 2>  <thanh phan 2>;
      		.....
  		
		  
	  };


*/

struct thongtinsinhvien
{
	char hoten[32]; //co the dung string (sau nay se hoc)
	char mssv[8];
	float diem;
	

};
struct phanso   //tao doi tuong phanso
{
	int tu;  //thuoc tinh tu
	int mau; //thuoc tinh mau
	
};

void NhapPhanSo(phanso &x)
{
	printf("\nnhap tu so :");
	scanf("%d",&x.tu);
	printf("\nnhap mau so :");
	scanf("%d",&x.mau);
	
}
//cong hai phan so
phanso Cong2ps(phanso x,phanso y)
{
	phanso z;
	z.tu=x.tu*y.mau+x.mau*y.tu;
	z.mau=x.mau*y.mau;
	return z;
}
void NhapMangPhanSo(phanso a[],int n)
{
	printf("\nnhap n=");scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		NhapPhanSo(a[i]);
	}
}

//tim phan so lon nhat
phanso maxphanso(phanso a[],int n)
{
//	phanso max;
//	int max1=a[0];
//	for(int i=0;i<n;++i)
//	{
//		if()
//	}
}
void XuatPhanSo(phanso x)
{
	printf("\nphan so :%d/%d",x.tu,x.mau);
}

void XuatMangPhanSo(phanso a[],int n)
{
	for(int i=0;i<n;++i)
	{
		XuatPhanSo(a[i]);
	}
}
//viet ham truy xuat du lieu cua struct
void NhapThongTinSinhVien(thongtinsinhvien &x)  //o day ta phai su dung gia tri tham chieu &x (vi x duoc nhap vao va thay doi)
{
	//nhap ho ten
	printf("\nNhap ho ten :");
	fflush(stdin);
	gets(x.hoten);//khi su dung gets thi ko can dung &x
	
	//nhap mssv
	printf("\nNhap MSSV :");
	fflush(stdin);
	gets(x.mssv);
	
	//nhap diem
	printf("\nNhap diem :");
	scanf("%f",&x.diem);
	
	
	//x.hoten la de truy xuat den ho ten trong struct thongtinsinhvien	
}
//sap xep danh sach
void hoandoi(thongtinsinhvien &x,thongtinsinhvien &y)
{
	thongtinsinhvien temp;
	temp=x;
		x=y;
		y=temp;
	
}
void sapxepDS(thongtinsinhvien a[],int n)
{
	for(int i=0;i<n-1;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			if(a[i].diem<a[j].diem)
			{
				hoandoi(a[i],a[j]);
			}
		}
	}
}

//ham xuat du lieu 
void XuatThongTinSinhVien(thongtinsinhvien x)//khoi goi dem gia tri tham chieu (thay vao do la tham tri)
{
	printf("\nHo ten :%s",x.hoten);
	printf("\nMSSV :%s",x.mssv);
	printf("\nDiem :%f",x.diem);
	
	//trong C++ ko can dung %
	
}
int main()
{
	//khai bao cau tru thongtinsinhvien
	//thongtinsinhvien y; //dung y hay x hay z hay ... deu duoc
	
	
	//khai bao doi tuong phanso
//	phanso y,z,t;
//	
//	NhapPhanSo(y);
//	NhapPhanSo(z);
//	
//	
//	t=Cong2ps(y,z);
//	XuatPhanSo(t);
	phanso a[50];
	
	int n;
	NhapMangPhanSo(a,n);
	XuatMangPhanSo(a,n);
	
	
}
