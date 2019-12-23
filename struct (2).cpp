#include<iostream>

using namespace std;

struct thi_sinh
{
	char ma_sv[10];
	char ho_ten[36];
	int diem_toan;
	int diem_nguvan;
	int diem_tienganh;	
};
void nhap_thongtin(thi_sinh ts[],int &n)
{
	cout<<"So luong thi sinh muon nhap";
	cin>>n;
	
	for(int i=0;i<n;++i)
	{
		//liet ke tung thi sinh
		cout<<"----------- Thi sinh "<<i+1<<" --------------"<<endl;
		
		//nhap
		
		fflush(stdin);
		cout<<"Ma sinh vien: ";
		gets(ts[i].ma_sv);
		
		cout<<"Ho va ten: ";
		gets(ts[i].ho_ten);
		
		cout<<"Diem mon toan: ";
		cin>>ts[i].diem_toan;
		cout<<"Diem mon ngu van: ";
		cin>>ts[i].diem_nguvan;
		cout<<"Diem mon tieng anh: ";
		cin>>ts[i].diem_tienganh;	
	}
}
//nhung thi sinh co it nhat mot mon thi co diem <5
void tim_1(thi_sinh ts[],int n)
{
	cout<<endl;
	cout<<"thi sinh co it nhat mot mon thi co diem <5"<<endl;
	for(int i=0;i<n;++i)
	{
		
		if(ts[i].diem_toan<5||ts[i].diem_nguvan<5||ts[i].diem_tienganh<5)
		{	
			cout<<ts[i].ho_ten<<endl;
		}
	}	
}
//nhung thi sinh co tong diem 3 mon thi max
void tim_2(thi_sinh ts[],int n)
{
	
	int max=ts[0].diem_toan+ts[0].diem_nguvan+ts[0].diem_tienganh;
	int vitri=0;
	for(int i=0;i<n;++i)
	{
		
		if((ts[i].diem_toan+ts[i].diem_nguvan+ts[i].diem_tienganh) > max)
		{
			max=ts[i].diem_toan+ts[i].diem_nguvan+ts[i].diem_tienganh;
			vitri=i;
		}
	}
	cout<<endl;
	cout<<"thi sinh co tong diem 3 mon thi lon nhat: "<<ts[vitri].ho_ten;
}
//tim thi sinh co ma sinh vien la 123
void tim_3(thi_sinh ts[],int n)
{
	//nho them thu vien #include<string.h> o tren
	
	for(int i=0;i<n;++i)
	{
		
		if(strcmp(ts[i].ma_sv,"123") == 0)
		{
			cout<<endl;
			cout<<"thi sinh co ma sinh vien la 123 : "<<ts[i].ho_ten;
		}
	}
}
//nhung thi sinh deu co diem cua 3 mon thi >=5
//sap xep giam dan

void tim_4(thi_sinh ts[],int n)
{
	
	int temp[20],k=0;
	for(int i=0;i<n;++i)
	{
			if(ts[i].diem_toan>=5&&ts[i].diem_nguvan>=5&&ts[i].diem_tienganh>=5)
			{
				temp[k++]=i;
			}
		
	}
	//co the co nhieu thi sinh co ca 3 mon>=5
	cout<<endl;
	cout<<"thi sinh co diem ca 3 mon >=5";
	for(int i=0;i<k;++i)
	{
		cout<<ts[temp[i]].ho_ten<<" ";
		
	}
	
}

int main()
{
	thi_sinh ts[200];
	int n;
	
	nhap_thongtin(ts,n);
	tim_1(ts,n);
	tim_2(ts,n);
	
	tim_3(ts,n);
	
	tim_4(ts,n);
	
	cout<<endl;
	system("pause");
	return 0;
}
