#include<iostream>

#include<string.h>
using namespace std;

void xoa(char *s ,int vitrixoa)
{
	int length=strlen(s);

	for(int i=vitrixoa;i<length;++i)
	{
		s[i]=s[i+1];
	}
	s[length]--;
}
void ChuanHoaChuoi(char *s)
{
	
	//viet hoa chu thuong
	strupr(s);
	
	
	int length=strlen(s);
	
	
	
	for(int i=0;i<length;++i)
	{
		//xoa khoang trang dau
		if(s[0]==' ')
		{
			xoa(s,0);
			length--;
		}
		if(s[i]==' ' && s[i+1] == ' ')
		{
			xoa(s,i);
			i--;
			length--;
		}
		
		//xoa khoang trang cuoi cung
		
		if(s[length-1]==' ')
		{
			xoa(s,length-1);
			length--;
		}	
			
	}
	
	
	
	
	
}
int main()

{
	
	char *s;
	s=new char [1000];
	
	
	cout<<"nhap chuoi s :"<<endl;
	
	gets(s);
	
	ChuanHoaChuoi(s);
	cout<<s;
	
	delete s;
	
	system("pause");
	return 0;
}
