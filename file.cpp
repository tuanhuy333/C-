#include<stdio.h>
#include<iostream>
#include<cstdio>


using namespace std;


int main()
{
	FILE *fpr,*fpw;
	
	//ghi file
	
	fpw=fopen("WriteFile.txt","w");
	
	fprintf(fpw,"dong nay la tui ghi vo bang fprintf do nhe \n");
	fputs("dong nay la tui ghi vo bang fputs do nhe \n",fpw);
	
	
	
	fclose(fpw);
	
	//doc file
	fpr=fopen("ReadFile.txt","r");
	
	char s[500];
	
	int n,m;
	fscanf(fpr,"%d",&n);
	
//	fscanf(fpr,"%s",s);
	cout<<n<<endl;
	
	fseek(fpr, 0, SEEK_SET); //ham di chuyen con tro ve dau 
	
	
	fscanf(fpr,"%d",&m);
	cout<<m<<endl;
	
//	cout<<"dong nay la tui doc bang fscanf do nhe "<<s<<endl;
//	
//	
//	cout<<"dong nay la tui doc bang fgets do nhe "<<fgets(s,500,fpr)<<endl;
//	
	
	
	fclose(fpr);
	
	
	
	
	return 0;
}
