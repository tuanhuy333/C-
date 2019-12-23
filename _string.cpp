#include<stdio.h>
#include<string.h>
#include<iostream>


using namespace std;

//dua cac ky tu dau tien cua moi tu thanh chu hoa,cac chu con lai la chu thuong
char *ChuanHoaChuoi(char *s)
{
	strlwr(s);//dua cac ky tu thanh chu thuong het
	
	for(int i=0;i<strlen(s);++i)
	{
		if(s[i] == ' ' && s[i+1] != ' ')
		{
			s[i+1] -=32;
		}
	}
	if(s[0] != ' ') s[0] -=32;
	return s;
}
int dem_so_tu(char *s)
{
	int dem=0;
	for(int i=0;i<strlen(s);++i)
	{
		if(s[i] == ' ' && s[i+1] != ' ')
			dem++;
	}
	return dem+1;
}

void dem_so_ky_tu_moi_tu(char *s)
{
	
	int dem=0;
	
	for(int i=0;i<strlen(s);++i)
	{
		
		if(s[i] != ' ') dem++;
		else {
			cout<<dem<<" ";
			dem=0;
		}
		
	}
	
	cout<<dem;
	
	
}
int dem_mot_ky_tu_bat_ky(char *s)
{
	int dem=0;
	char ch='t';
	
	for(int i=0;i<strlen(s);++i)
	{
		if(s[i] == ch) dem++;
	}
	return dem;
}
bool kiem_tra_chuoi_doi_xung(char *s)
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
char *tach_mot_tu_tu_trai(char *s)
{
	return strrev(strrchr(strrev(s),' ')+1);
	
}
char * tach_mot_tu_tu_phai(char *s)
{
	return strrchr(s,' ')+1;
}
char *sap_xep_ky_tu_tang(char *s)
{
	for(int i=0;i<strlen(s) -1;++i)
	{
		for(int j=i+1;j<strlen(s);++j)
		{
			if(s[i] > s[j] && s[i] != ' ' && s[j] != ' ')
			{
				char temp=s[i];
					 s[i]=s[j];
					 s[j]=temp;
			}
		}
	} 
}
void tim_tu_dai_nhat(char *s)
{
	char temp[200]; //mot cai hop de luu
	char result[200]; //mot cai hop de show ket qua
	int max=0;
	int j=0;
	
	for(int i=0;i<=strlen(s);++i)
	{
		if(s[i] != ' ' && s[i] != '\0' )  //ko co khoang trang va chua het chuoi
		{
			temp[j++] = s[i]; //luu cac ky tu s vao temp
			
			
		}
		else //neu gap khoang trang
		{
			temp[j] = '\0'; //them ket thuc chuoi de dung viec luu ky tu
			if(strlen(temp) > max)
			{
				strcpy(result,temp);
				max=strlen(temp);
				
			}
			j=0; //chuyen sang tu khac thi phai cap nhat lai j cua temp
			//de cho temp[] chua tu khac dai hon ,neu khong se chua tat ca cac tu
		}
	}
	puts(result) ;
	//cout<<"do dai "<<max;
//	cout<<strlen(temp);
}

//DEM CHUOI CON 

int dem_chuoi_con(char *s1,char *s2)
{
	int dem=0;
	
	while(strstr(s1,s2) != NULL)
	{
		dem++;
		
		strcpy(s1,strstr(s1,s2)+1);
		 //cap nhat lai chuoi s1
	}
	return dem;
}
char * chu_hoa(char *s) //ko dung strupr
{
	for(int i=0;i<strlen(s);++i)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -=32;
		}
	}
	return s;
}
char *chu_thuong(char *s) //ko dung strlwr
{
	for(int i=0;i<strlen(s);++i)
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] +=32;
		}
	}
	return s;
}
char *viet_hoa_chu_cai_dau_tien(char *s)
{
	strlwr(s); //viet thuong het
	
	for(int i=0;i<strlen(s);++i)
	{
		if(s[i] == ' ' && s[i+1] != ' ')
		
		{
			s[i+1] -=32;
		}
	}
	return s;
	
}
char *doi_chu_xen_ke_1hoa_1thuong(char *s)
{
	strupr(s);//viet hoa het
	
	for(int i=0;i<strlen(s);++i)
	{
		if(i%2==0)
		{
			if(s[i] >= 'a' && s[i] <='z')
			{
				s[i] -=32;
			}
		}
		else
		{
			s[i] +=32;
		}
	}
	return s;

}

/*
Vi?t chuong trình d?o ngu?c th? t? các t? có trong chu?i
vd: lap trinh bang ngon ngu c
xuat ra:  c ngu ngon bang trinh lap
*/
void dao_thu_tu(char s[])
{
	char temp[200]; //de luu tru 
	temp[0]='\0';
	for(int i=strlen(s)-1;i>=0;--i)
	{
		if(s[i] == ' ')
		{
			strcat(strcat(temp,s+i+1)," ");
			s[i]='\0';  //dat dau ket thuc chuoi vao vi tri i co khoang trang,de thuc
					    //hien tu ke tiep
		}
	}
	strcat(temp,s); //noi tu con lai cuoi cung
	cout<<temp;
	
}

//dao thu tu tung tu trong chuoi
void dao_tung_tu(char *s)
{
	strrev(s); //dao nguoc chuoi lai
	
	char temp[200];
	temp[0]='\0';
	
	for(int i=strlen(s)-1;i>=0;--i)
	{
		if(s[i] == ' ')
		{
			strcat(strcat(temp,s+i+1), " ");
			s[i] = '\0';
		}
	}
	strcat(temp,s);
	cout<<temp;
}

//xoa n ky tu tai vi tri i
void xoa(char *s,int vt,int n)
{
	strcpy(s+vt,s+vt+n); // vd vt=3; n =4 s+3+4 se thay the cho s+3
	cout<<s;
	
}
//chen chuoi bat ky vao chuoi s
void chen(char *s ,char *d,int vt)
{
	char temp[200]; //mang ky tu tam thoi

	strcpy(temp,s+vt);
	strcpy(s+vt,d);
	strcat(s,d);
	
	cout<<s;
}
void cat_ho_ten(char *s)
{
	char *t;
	int i; //con tro t
	for(i=strlen(s) -1 ; i>=0;--i) //doan nay de tim vi tri khoang trang cuoi cung
	{
		if(s[i] ==' ' && s[i+1] != ' ')
		{
			break;	
		}	
	}
	
	t=s+i+1; //con tro tro den ky tu cuoi cung den cuoi chuoi
	
	cout<<"ten:"<<t<<endl;
	
	s[i]='\0'; //sau khi lay ten thi dat dau ket thuc tai cho do lun
	
	cout<<"chu lot:"<<s;
}
//ki tu xuat hien nhieu nhat
void kituxuathiennhieunhat(char *s)
{
	int a[100],n=0;
	
	for(int i=0;i<strlen(s);i++)
	{
	
		int d=1;
		for(int j=i+1;j<strlen(s);j++)
			if(s[i]==s[j])
			{ 
				d++;
				for(int k=j;k<strlen(s);k++)
					s[k]=s[k+1];
				j--;
			}
			a[n++]=d; //luu ket qua
	}
	int max=a[0];
	
	for(int i=1;i<strlen(s);i++)
		if(a[i]>max)
			max=a[i];
	for(int i=1;i<strlen(s);i++)
		if(a[i]==max)
			cout<<"ki tu "<<s[i]<<" xuat hien nhieu nhat la "<<a[i]<<" lan\n";
} 

void demkitu(char *s)
{
	int a[100],n=0;
	for(int i=0;i<strlen(s);i++)
	{
		int d=1;
		for(int j=i+1;j<strlen(s);j++)
			if(s[i]==s[j])
			{
				 d++;
				for(int k=j;k<strlen(s);k++)
					s[k]=s[k+1];
					j--;
			}
			a[n++]=d;
}

		for(int i=0;i<strlen(s);i++)
			cout<<"ki tu "<<s[i]<<" xuat hien "<<a[i]<<" lan\n";
}
void dem_ki_tu(char *s)
{
	int dem;
	int temp[200];
	int n=0;
	for(int i=0;i<strlen(s);++i)
	{
		for(int j=i+1;j<strlen(s);++j)
		{
			if(s[i] == s[j])
			{
				dem++;
				for(int k=j;k<strlen(s);++k)
				{
					s[k]=s[k+1];
					j--;
				}
			}
		}
		temp[n++]=dem;
	}
	
	//in ra ket qua
	for(int i=0;i<strlen(s);++i)
	{
		cout<<"ky tu "<<s[i]<<" co "<<temp[i]<<" ky tu"<<endl;
	}
}


int main()
{
	char s[]= "co the gap lai giua cuoc doi";//noi vao temp[]
	char s1[]="nguyen tuan huy tun huy "; //15

	char s2[]="truong dai hoc sai gon";
	
	cout<<tach_mot_tu_tu_phai(s);

	
	return 0;
}
