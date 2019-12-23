#include<iostream>

#include<string.h>


using namespace std;
//dem so tu trong cau
int DemSoTu(string s)
{
	int dem=0;
	
	if(s[0]!=' ')
	{
		dem=1;
	}
	for(int i=0;i<s.length() -1;++i)
	{
		if(s[i] == ' ' && s[i+1] != ' ')
		{
			dem++;
		}
	}
	return dem;
}
void VietHoaChuCaiDauTien(char *s)
{
	
	for(int i=0;i<strlen(s);++i)
	{
		//viet hoa ky tu dau tien
		
		if(s[0] != ' ' )
		{
			if(s[0] >= 'a' && s[0] <= 'z')
			{
				s[0]-=32;
			}
		}
		if(s[i] ==' ' && s[i+1] != ' ')
		{
			if(s[i+1] >='a' && s[i+1] <='z')
			{
				
				s[i+1] -=32;
			}
		}
		
	}
}
void xoa(char *s,int vitrixoa)
{
	//ham xoa ky tu trong chuoi
	int length=strlen(s);
	for(int i=vitrixoa;i<length;++i)
	{
		s[i]=s[i+1];
	}
	s[length]--;
	
}
void XoaKhoangTrangThua(char *s) //chuan hoa chuoi
{
	int length=strlen(s);
	
	for(int i=0;i<length;++i)
	{
		//xoa khoang trang dau
		if(s[0] == ' ' )
		{
			xoa(s,0);
			length--;
			
			
		}
		if(s[i] == ' ' &&s[i+1] == ' ')
		{
			xoa(s,i);
			i--;
			length--;
		}
		//xoa khoang trang cuoi
		
		if(s[length-1] ==' ')
		{
			xoa(s,length-1);
			length--;
		}
		
	
	}
	
}
bool KiemTraChuoiDoiXung(char *s)
{
	int i=0;
	int j=strlen(s)-1;
	
	while(i<j)
	{
		if(s[i++] != s[j--])
			return false;
	}
	return true;
	
}

int SoLanXuatHienChuoiCon(char *s1,char *s2)
{
	int dem=0;
	int l=strlen(s2);
	while((s1=strstr(s1,s2)) != NULL)
	{
		dem++;
		s1+=l-1;
	}
	return dem;
}
//ham lay chuoi con giong substr(vt,sokytu) 
//nhung ham nay la substr(start,end)
char* SubStr(char *s,int start ,int end)
{
	char p[100]; //tao mang khac de luu chuoi
	int id=0;
	for(int i=start;i<=end;++i)
	{
		p[id++]=s[i];
	}
	p[id] =NULL; //ket thuc chuoi
	return p;
}

int main()
{
	char *s;
	s=new char [1000];
	
	cout<<"nhap chuoi s"<<endl;
	gets(s);
	
	
	XoaKhoangTrangThua(s);
	cout<<s;
	
	
	
	
	delete s;
	
	system("pause");
	return 0;
	
}
