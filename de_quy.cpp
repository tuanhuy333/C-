#include<iostream>
#include<math.h>

using namespace std;

//tinh S(n)=1+2+3+...+n

int tong_1(int n)
{
	if(n==1)
		return 1;
	return n + tong_1(n-1);
}

//tinh S(n)= 1^2+2^2+3^2+...+n^2

int tong_2(int n)
{
	if(n==1) //dieu kien dung
		return 1;
	return pow(n,2) + tong_2(n-1);
	
}
//tinh S(n)= 1+ 1/2 +1/3 +1/4 +...+1/n

float tong_3(int n)
{
	if(n==1)
		return 1;
	return (1.0/n) + tong_3(n-1);
}
//tinh S(n)=1/2+ 2/3+ 3/4 +...+n/(n+1)
float tong_4(int n)
{
	if(n==1)
		return 0.5;
	return (float)n/(n+1) + tong_4(n-1);
}
//tinh S(n)= 1/1*2 + 1/2*3 + 1/3*4 +...+ 1/n*(n+1)
float tong_5(float n)
{
	if(n==1)
		return 0.5;
	return 1/(n*(n+1)) + tong_5(n-1);
}

//tinh S(n)= n!
int giai_thua(int n)
{
	if(n==1)
		return 1;
	return n* giai_thua(n-1);
}
//tinh x^n
float luy_thua(float x,int n)
{
	if(n==0)
		return 1;
	if(n==-1)
		return 1.0/n;
	if(n<0)
		return (1.0/x) * luy_thua(x,n+1);
	return x* luy_thua(x,n-1);
}

//tinh S(n)= 1 + 1.2 +1.2.3 +...+ 1.2.3....n
float tong_6(int n)
{
	if(n==1)
		return 1;
	return giai_thua(n) + tong_6(n-1);
}

//tinh S(n)= x + x^2 +x^3 +...+x^n
int tong_7(float x,int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return x;
	return pow(x,n) + tong_7(x,n-1);
}
//tinh S(n) = x + x^2/2! + x^3/3! +... + x^n/n! (luy thua /giai thua)
float tong_8(float x,int n)
{
	if(n==1)
		return x;
	return pow(x,n)/giai_thua(n) + tong_8(x,n-1);
}
//tinh canbachai(2+canbachai(2+...+cangbachai(2+canbachai(2)))) n dau can
float tong_9(int n)
{
	if(n==1)
		return sqrt(2);
	return sqrt(2+ tong_9(n-1));
}

//tinh canbachai(n+canbachai(n-1+...+cangbachai(2+canbachai(1)))) n dau can
float tong_10(int n)
{
	if ( n==1)
		return 1;
	return sqrt(n + tong_10(n-1));
}

//tinh canbachai(1+canbachai(2+canbachai(3+...+canbachai(n)))) n dau can
float _can_long_nhau(float i,float n)
{
	if(i==n)
		return sqrt(n);
	return sqrt(i+ _can_long_nhau(i+1,n));
}
float can_long_nhau(int n)
{
	return _can_long_nhau(1,n);
}
/*
DE QUY HO TUONG
X(0)=1
Y(0)=0
X(n)= x(n-1) +y (n-1) (n>0)
Y(n)= 3*x(n-1) + 2 *y(n-1) (n>0)

*/
int Xn(int n);
int Yn(int n);


int Xn(int n)
{
	if(n==0)
		return 1;
	return Xn(n-1) + Yn(n-1);
	
	
}
int Yn(int n)
{
	if(n==0)
		return 0;
	return 3*Xn(n-1) + 2*Yn(n-1);
}

/*
DE QUY PHI TUYEN

X(0)=1
X(n)=n^2 * X(0) + (n-1)^2 * X(1) +...+(n-i)^2 * X(i)+...+1^2 * X(n-1)


*/

float phi_tuyen(int n)
{
	if(n==0)
		return 1;
	float s=0;
	for(int i=1;i<=n;++i)
	{
		s += i *i * phi_tuyen(n-i);
	}
	return s;
}

/*
X1=1,X2=1
Xn=Xn-1+(n-1)Xn-2


*/
float X(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	return X(n-1) + ((n-1)*X(n-2));
}
/*
Y1=1, Y2=2 ,Y3=3
Yn=Yn-1*(5Yn-2 + 6Yn-3)

*/
float Y1(int n)
{
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 3;
	
	return Y1(n-1) * (5*Y1(n-2) + 6*Y1(n-3));
}
//khong dung de quy
float y1(int n)
{
	int y1=1,y2=2,y3=3,yn=1;
	
	for(int i=4;i<=n;++i)
	{
		yn=y3*(5*y2 + 6*y1);
		y1=y2;
		y2=y3;
		y3=yn;
		
		
		
	}
	return yn;
}
//Y1=1,Y2=2,Y3=3
//Yn=Yn-1 + 2Yn-2 +3Yn-3
int y(int n)
{
	if(n==1 )
	{
		return 1;
	}
	if(n==2 )
	{
		return 2;
	}
	if(n==3 )
	{
		return 3;
	}
	return y(n-1)+2*y(n-2)+3*y(n-3);
}
int Y(int n)
{
	int Y1=1,Y2=2,Y3=3,Yn=0;
	
	for(int i=4;i<=n;++i)
	{
		Yn=Y3+2*Y2+3*Y1;
		
		Y1=Y2;
		Y2=Y3;
		Y3=Yn;
	} 
	return Yn;
}
/*
A1=1
An=n(A1+A2+...+A(n-1)
*/
int A(int n)
{
	if(n==1)
		return 1;
	int s=0;
	for(int i=1;i<n;++i)
	{
		s+= n*(A(i));
	}
	return s;
}

int main()
{

cout<<A(6)<<endl;
		cout<<a(6)<<endl;
	
	
	
	system("pause");
	return 0;
}
