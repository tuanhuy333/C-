#include <stdio.h>
#include <conio.h>

//viet ham

float tinh(int n)
{
	float s=0;
	for (int i=0;i<n;i++)
  {
  s=s+((float)1/(2*i+1));
  }
 printf("result=%f",s);

}
int main()
{
int n;
// float s;
printf("nhap n ");
scanf("%d",&n);
// s=0;
// for (i=0;i<=n;i++)
//  {
//  s=s+((float)1/(2*i+1));
//  }
//printf("ket qua can tim s= %f",s);

//goi ham
return tinh(n);


getch();
return 0;
	
}
