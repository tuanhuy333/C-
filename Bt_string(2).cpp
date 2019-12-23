#include<iostream>
#include<string.h>
using namespace std;
/*
tao chuoi con chua tu thu 2,3,4
*/
void chuoi_con(char *s)
{
	int dem=0;
	char temp[200];
	temp[0]='\0';
	for(int i=0;i<strlen(s);++i)
	{
		if(s[i] == ' ' && s[i+1] != ' ')
		{
			
			dem++;
					
		}
		if(dem==4)
		{
			s[i]='\0';
			strcpy(temp,s);
			
		}
		
	
	}
	cout<<strstr(temp," ")+1;
	
}
void noi_tu_dau_voi_tu_cuoi(char *s)
{
	char temp[200]; //de luu nguyen ven chuoi s
	
	strcpy(temp,s);
	
	int k=strchr(s,' ') -s; //vi tri khoang trang dau tien,de tim tu dau tien
	
	
	s[k]='\0';//dat dau ket thuc chuoi tai k
	
	cout<<strcat(s,strrchr(temp,' ')); //noi tu cuoi cung vao
	
	
	
}
void dao_nguoc_cac_tu(char *s)
{
	char temp[200];
	temp[0]='\0';
	for(int i=strlen(s)-1;i>=0;--i)
	{
		if(s[i] == ' ')
		{
			strcat(strcat(temp,s+i+1)," ");
			s[i]='\0';
		}
	}
	strcat(temp,s);
	
	cout<<temp;
	
}
void dao_cac_ky_tu_trong_tu(char *s)
{
	char temp1[200]; //luu tam thoi
	temp1[0]='\0';
	char temp2[200]; //ket qua
	temp2[0]='\0';
	
	int j=0;
	for(int i=0;i<strlen(s);++i)
	{
		
		if(s[i] != ' ')
		{
			temp1[j++] = s[i];
							
		}
		else
		{
			strcat(strrev(temp1)," ");
			strcat(temp2,temp1);
			j=0;
		}
	}
	cout<<temp2;
}
int main()
{
	char  s[] ="what good if sda ha ";
	
//	char temp[200];
//	temp[0]='\0';
//	cout<<strcat(s,"dsas");cout<<endl;
//	cout<<s;
//	cout<<s;cout<<endl;
//	chuoi_con(s);
	
	dao_cac_ky_tu_trong_tu(s);
	
	system("pause");
	return 0;
}
