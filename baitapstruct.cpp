#include <iostream>
#include <string>
using namespace std;
int main()
{
    struct sinhvien
    {
        string hoten;
        float dtb1, dtb2, dtb3;
        float max12,max23,max;
    };
    sinhvien sv[200];
    int n;
    cout << "So luong sinh vien can nhap: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Nhap Ho Ten sv: ";
        cin.ignore(1);
        getline(cin, sv[i].hoten);
        fflush(stdin);
        cout << "Nhap diem tb nam 1: ";
        cin >> sv[i].dtb1;
        cout << "Nhap diem tb nam 2: ";
        cin >> sv[i].dtb2;
        cout << "Nhap diem tb nam 3: ";
        cin >> sv[i].dtb3;
    }
    for (int j = 1; j <= n;j++)
    {
        cout << "\n\nHo Va Ten : " << sv[j].hoten << "\n Diem tb nam 1: " << sv[j].dtb1
            << "\n Diem tb nam 2 " << sv[j].dtb2 << "\n Diem tb nam 3: " << sv[j].dtb3 
			<<endl<<"Diem tong ket "<<(sv[j].dtb1+sv[j].dtb2+sv[j].dtb3)/3<<endl;
			

    }
    //sinh vien tien bo  nhat
    
    
    
    system("pause");
    return 0;
}
