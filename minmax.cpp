#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a,b,c,d,min,max;
	printf("nhap 4 so a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
    min=a<b ? a:b;
    min=min<c ? min:c;
    min=min<d ? min:d;
    
    
    max=a>b ? a:b;
    max=max>c ? max:c;
    max=max>d ? max:d;
    
//    
//    kq=(s==n?1:0);
//    return kq;

	printf("max %d",max);
    printf("\nmin %d",min);
}
