#include<iostream>

#include<string.h>

using namespace std;



int main()
{
	/*NHAP XUAT CHUOI 
	
	string hoten;//khai bao chuoi
	string job;
	int tuoi;
	
	//nhap ho ten
	cout<<"nhap ho ten sinh vien "<<endl;
	
	getline(cin,hoten);
	
	//nhap tuoi
	cout<<"nhap tuoi "<<endl;
	cin>>tuoi;
	
	//nhap nghe nghiep
	fflush(stdin); //phai xoa bo nho dem
	cout<<"nhap nghe nghiep "<<endl;
	getline(cin,job);
	
	
	cout<<hoten<<endl;
	
	cout<<job<<endl;
	
	cout<<tuoi;
	
	
	*/
	
	
	//CAC HAM TRONG STRING
	
//	string s="toi la ai";
//	
//	cout<<"kich thuoc cua chuoi s"<<s.capacity()<<endl;
//	cout<<"do dai cua chuoi s "<<s.length()<<endl;
//	
//	//XOA
//	
//	string s1="chuoi thu nhat";
//	
//	s1.erase(s1.begin()+4); //xoa 1 ky tu o vi tri thu 4
//	cout<<s1<<endl;
//	
//	s1.erase(2,4); //xoa di 4 ky tu tai vi tri thu 2
//	cout<<s1<<endl;
//	
//	//THEM
//	
//	string s2="chuoi thu hai";
//	
//	s2.insert(1,2,'A'); //them vao vi tri thu 1 ,2 ky tu 'A'
//	cout<<s2<<endl;
//	
//	s2.insert(s2.begin()+5,'U'); //them vao vi tri 5 1 ky tu U
//	cout<<s2<<endl; 
//	
//	s2.insert(5,1,'U');   //cung them vao vi tri thu 5 1 ky tu U
//	cout<<s2<<endl;
//	
//	//LAY CHUOI CON
//	
//	string s3= "Nguyen Tuan Huy";
//	
//	cout<<"Ten :"<<s3.substr(12,3) <<endl;
//	cout<<"Ho :"<<s3.substr(0,6)  <<endl;
//	cout<<"Ten voi chu lot :"<<s3.substr(7) <<endl;
//	
//	//TIM KIEM
//	
//	string s4="TIM KIEM KY TU";
//	
//	int ketqua= s4.find('M');
//	if(ketqua != string::npos)
//	{
//		cout<<ketqua; //tr? v? v? trí xu?t hiên ??u tiên
//	}
//	
//	int found=s4.find("M",1,3);
//	if(found!= string::npos)
//	{
//		cout<<found;
//	}
//	

	char *s1;
	char *s2;
	s1=new char[1000];
	s2=new char[1000];
	cout<<"nhap chuoi s1 :"<<endl;gets(s1);
	cout<<"nhap chuoi s2 :"<<endl;gets(s2);
	
	cout<<SoLanXuatHienChuoiCon(s1,s2);
	
	delete s1;
	delete s2;
	
	system("pause");
	return 0;
}
