#include<stdio.h>

int main()
{
	int ngay,thang,nam,s,i;

	
	printf("nhap vao ngay thang nam ");
	scanf("%d%d%d",&ngay,&thang,&nam);
	s=ngay;
	for( i=1;i<thang;++i)
	{
		switch(i)
		{
			case 4:case 6:case 9:case 11: s+=30;break;
			case 2:s+= (nam%4==0 && nam%100!=0 || nam%400==0)?29:28;
				   break;
			default :s+=31;
				
		}
	}
	printf("ngay thu %d trong nam",s);
	
}
