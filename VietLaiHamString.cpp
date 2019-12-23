#include<iostream>
#include<string.h>

using namespace std;

//viet ham do dai chuoi
int strlen1(char *s)
{
	
	int dem=0;
	
	while(s[dem] != NULL)
	{
		dem++;
	}
	return dem;
}

//viet ham copy chuoi strcpy(s)
void strcpy1(char *s1,char *s2)
{
	int length=strlen(s2);
	
	for(int i=0;i<length;++i)
	{
		s1[i]=s2[i];
	}
	s1[length] = NULL;
}

//viet ham strlwr(s) chuyen chuoi thanh chu thuong
char* strlwr(char *s)
{
	char *p= strdup(s);
	int length=strlen(s);
	for(int i=0;i<length;++i)
	{
		if(p[i] >='A' && p[i] <= 'Z')
		{
			p[i]+=32;
		}
	}
	return p;
}
//viet ham strupr(s) la ham chuyen chuoi thanh chu hoa
char *strupr(char *s)
{
	
	int length=strlen(s);
	char *p=strdup(s);
	
	for(int i=0;i<length;++i)
	{
		if(p[i] >='a' && p[i] <= 'z')
		{
			p[i]-=32; //giua chu thuong va hoa cach nhau 32
		}
	}
	return p;
}

int main()
{
	
	char *s;
	s=new char [1000];
	
	cout<<"nhap chuoi s "<<endl;
	gets(s);
	
	char s1[]="huy";
	char s2[]="tuanhuy";
	
	
	
	cout<<"do dai chuoi ham strlen(s) :"<<strlen1(s)<<endl;
	
	strcpy1(s1,s2);
	cout<<"copy chuoi s2 vao chuoi s1 :"<<s1<<endl;
	
	strcpy(s,strupr(s));
	cout<<"chuoi thanh chu hoa ham strupr(s) :"<<s<<endl;
	
 	strcpy(s,strlwr(s));
	cout<<"chuoi thanh chu thuong ham strlwr(s) :"<<s<<endl;
	
	delete s;
	
	system("pause");
	return 0;
}
