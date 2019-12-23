/*nh?p vào 1 ma tran  r?i chuy?n ma tr?n dó thành ma tr?n
== > có ngia là c?t thành hàng và hàng thành c?t A[i][j] = A[j][i];*/
#include<conio.h>
#include<stdio.h>
int nhapmang(int A[100][100], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("nhap A[%d][%d] : ", i, j);
			scanf("%3d", &A[i][j]);
		}
	}
	return 0;
}
int xuatmang(int A[100][100], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int hoandoi(int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
	return 0;
}
int chuyendoi(int A[100][100], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = i+1; j < n; j++)
		{
			hoandoi(A[i][j], A[j][i]);
		}
	}
	xuatmang(A, n);
	return 0;
}
int main()
{
	int n, A[100][100];
	printf("xin moi ban nhap n : ");
	scanf("%d", &n);
	nhapmang(A, n);
	xuatmang(A, n);
	printf("\n");
	printf("ma tran sau khi dc chuyen thanh ma tran chuyen don vi la: \n");
	chuyendoi(A, n);
	getch();
	return 0;
}
