//chuong trinh nhap ten diem trung binh toan vs van
#include<stdio.h>
#include<string.h>
#include<conio.h>
//vi khi khai bao bien o dau thi chi co ham do hieu bien o do thoi
//nen ta phai khai bao bien toan cuc (sau khi khai bao thu vien)
char hoten[20];
int toan,van;
float trungbinh;




// write function here !!!
// dung thu tuc (void)

void nhapdulieu()
{
	//fflush(stdin); co the co hoac ko
	printf("nhap ho ten :\n");
	gets(hoten);
	
	printf("nhap diem mon toan:\n");
	scanf("%d",&toan);
	printf("nhap diem mon van:\n");
	scanf("%d",&van);
	
	
}

void tinhtrungbinh()
{
 
 
     trungbinh=(toan+van)/2.0;


	


}


void inramanhinh()
{
	printf("ho ten %s\n",hoten); // nhieu ky tu thi dung %s instead of %c
	printf("diem toan %d\n",toan);
	printf("diem van %d\n",van);
	printf("trung binh %.2f",trungbinh);

}
int main()

{
	nhapdulieu();
	tinhtrungbinh();

	inramanhinh();
	

	
//	getch();   day la ham doi bam enter sau do ket thuc chuong trinh
//	return 0;







	
}
