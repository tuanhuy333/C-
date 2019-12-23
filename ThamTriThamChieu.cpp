/*vd : co 1 bien n

Tham tri : n
Tham chieu : &n

+Tham tri la tao ra 1 ban sao ,khi gia tri n thay doi (n-- or n++ ...) van khong thay doi
den gia tri n trong function

+Tham chieu thi gia tri cua bien n se duoc truyen truc tiep vao ban chinh (ban goc)
n se thay doi thi */


#include <stdio.h>

 
void thamtri(int a,int b)
{
	//gia tri a,b khong thay doi,van nhu gia tri o phan khai bao o ham main 
	// (a=1;b=2;)
	
    a = a + 123;
    b = b + 987;
    printf("Gia tri khi trong ham tham tri: a = %d , b = %d \n",a,b);
}
 
void thamchieu(int &a,int &b)
{
	//gia tri a,b thay doi theo ham (khong con co gia tri goc o ham main nua)
	
    a = a + 10;
    b = b + 5;
    printf("Gia tri khi trong ham tham chieu: a = %d, b = %d \n",a,b);
}
 
int main()
{
    int a=1,b=2;
 
    thamtri(a,b);
    printf("a = %d , b = %d \n",a,b);
 
    thamchieu(a,b);
    printf("a = %d, b = %d \n",a,b);
}
