#include<stdio.h>
#include<conio.h>

#include<Windows.h>

int main()
{


	// nhap password
	int pass=333;
	int p;
	
	//dung goto thay cho do...while
	
	nhaplai:printf("\nnhap password:");
	scanf("%d",&p);
	if(p!=pass)
	{
		printf("\nban da nhap sai roi vui long nhap lai !!!\nban co muon nhap lai ko (y/n)");
		char ykien;
		scanf("%s",&ykien);
		if(ykien=='y'||ykien=='Y')
		{
			system("cls");
			goto nhaplai;
		}
		else{
			
			system("cls");
			printf("chuong trinh ket thuc!!!cam on ban da su dung ;)");
		}
	
	
	}
	if(p==pass)
	{
		printf("\nban da nhap dung pass :)");
	}
	
//	do{
//		printf("nhap pass:");
//		scanf("%d",&p);
//		if(p==pass)
//		{
//			printf("ban nhap dung roi!");
//		}
//		else //cho mot cau nhap lai pass
//		{
//			do{
//				printf("ban da nhap sai vui long nhap lai");
//				scanf("%d",&p);
//				if(p==pass)
//				{
//					printf("ban nhap dung roi!");
//				}
//				
//			}
//			while(p!=pass);
//		
//			
//		}
//	
//		
//	}
//	while(p!=pass);

	
	getche();
	
		
		
	

}
