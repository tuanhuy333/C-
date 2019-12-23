#include<stdio.h>

int main()
{
	//liet ke chu cai tu A den chu cai nhap vao
	char kytu;
	printf("hay nhap chu cai ban muon liet ke (tu A den chu cai do)");
	scanf("%c",&kytu);
	for(char i='A';i<=kytu;i++)
	{
		printf("%5c",i);
	}
	
}
